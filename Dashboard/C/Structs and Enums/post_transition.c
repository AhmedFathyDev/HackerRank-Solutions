
// Uncompleted solution for Post Transition HackerRank challenge.

// https://www.hackerrank.com/challenges/post-transition/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct package
{
    char *ID;
    int weight;
    struct package *nextPtr;
};

typedef struct package Package;
typedef Package *PackagePtr;

struct postOffice
{
    int minWeight;
    int maxWeight;
    int packagesCount;
    PackagePtr packagesHeadPtr;
    PackagePtr packagesTailPtr;
};

typedef struct postOffice PostOffice;

struct town
{
    char name[6];
    int officesCount;
    PostOffice *offices;
};

typedef struct town Town;

Town *towns;
int townsCount;

void dequeue(PackagePtr *headPtr, PackagePtr *tailPtr)
{
    PackagePtr tempPtr = *headPtr;

    free((*headPtr)->ID);

    *headPtr = (*headPtr)->nextPtr;
    (*headPtr)->ID = (*headPtr)->nextPtr->ID;

    if (*headPtr == NULL)
    {
        *tailPtr = NULL;
        (*tailPtr)->ID = NULL;
    }

    free(tempPtr);
    tempPtr = NULL;
}

void enqueue(PackagePtr *headPtr, PackagePtr *tailPtr, char ID[], int weight)
{
    PackagePtr newPtr = (PackagePtr)malloc(sizeof(Package));

    if (newPtr == NULL)
    {
        exit(EXIT_FAILURE);
    }

    newPtr->ID = (char *)malloc(6 * sizeof(char));
    newPtr->ID = ID;
    newPtr->weight = weight;
    newPtr->nextPtr = NULL;

    if (*headPtr == NULL)
    {
        *headPtr = newPtr;
        (*headPtr)->ID = newPtr->ID;
    }
    else
    {
        (*tailPtr)->nextPtr->ID = newPtr->ID;
        (*tailPtr)->nextPtr = newPtr;
    }

    (*tailPtr)->ID = newPtr->ID;
    *tailPtr = newPtr;
}

int findTown(char townName[])
{
    int i = 0;
    while (i < townsCount)
    {
        if (!strcmp(townName, towns[i++].name))
        {
            break;
        }
    }
    return i - 1;
}

void printAllPackages(int townIndex)
{
    printf("%s:\n", towns[townIndex].name);
    for (int i = 0; i < towns[townIndex].officesCount; i++)
    {
        printf("\t%i:\n", i);
        PackagePtr currentPackage = towns[townIndex].offices[i].packagesHeadPtr;
        while (currentPackage != NULL)
        {
            printf("\t\t%s\n", currentPackage->ID);
            currentPackage = currentPackage->nextPtr;
        }
    }
}

void sendAllAcceptablePackages(int sourceOfficeIndex, int targetOfficeIndex)
{
    PackagePtr *currentPackageTail = &towns[sourceOfficeIndex].offices->packagesTailPtr;

    while (towns[sourceOfficeIndex].offices->packagesHeadPtr != NULL)
    {
        if (towns[sourceOfficeIndex].offices->packagesHeadPtr->weight >= towns[targetOfficeIndex].offices->minWeight &&
            towns[sourceOfficeIndex].offices->packagesHeadPtr->weight <= towns[targetOfficeIndex].offices->maxWeight)
        {
            enqueue(&towns[targetOfficeIndex].offices->packagesHeadPtr,
                    &towns[targetOfficeIndex].offices->packagesTailPtr,
                    towns[sourceOfficeIndex].offices->packagesHeadPtr->ID,
                    towns[sourceOfficeIndex].offices->packagesHeadPtr->weight);
        }
        else
        {
            enqueue(&towns[sourceOfficeIndex].offices->packagesHeadPtr,
                    &towns[sourceOfficeIndex].offices->packagesTailPtr,
                    towns[sourceOfficeIndex].offices->packagesHeadPtr->ID,
                    towns[sourceOfficeIndex].offices->packagesHeadPtr->weight);
        }
        dequeue(&towns[sourceOfficeIndex].offices->packagesHeadPtr,
                &towns[sourceOfficeIndex].offices->packagesTailPtr);
    }
}

char *townWithMostPackages(void)
{
    int maxPackagesTownIndex = -1;
    for (int i = 0, packages = 0, maxPackages = -1; i < townsCount; i++, packages = 0)
    {
        for (int j = 0; j < towns[i].officesCount; j++)
        {
            packages += towns[i].offices[j].packagesCount;
        }
        if (packages > maxPackages)
        {
            maxPackages = packages;
            maxPackagesTownIndex = i;
        }
    }
    return towns[maxPackagesTownIndex].name;
}

int main(int argc, char *argv[])
{
    int queries;
    scanf("%i", &townsCount);
    towns = (Town *)malloc(townsCount * sizeof(Town));

    for (int i = 0; i < townsCount; i++)
    {

        scanf("%s%i", towns[i].name, &towns[i].officesCount);
        towns[i].offices = (PostOffice *)malloc(towns[i].officesCount * sizeof(PostOffice));

        for (int j = 0; j < towns[i].officesCount; j++)
        {
            scanf("%i%i%i",
                  &towns[i].offices[j].packagesCount,
                  &towns[i].offices[j].minWeight,
                  &towns[i].offices[j].maxWeight);
            towns[i].offices[j].packagesHeadPtr = NULL;
            towns[i].offices[j].packagesTailPtr = NULL;

            for (int k = 0; k < towns[i].offices[j].packagesCount; k++)
            {
                char ID[6];
                int weight;
                scanf("%s%i", ID, &weight);
                enqueue(&towns[i].offices[j].packagesHeadPtr,
                        &towns[i].offices[j].packagesTailPtr,
                        ID,
                        weight);
            }
        }
    }

    scanf("%i", &queries);

    while (queries--)
    {

        char townName[6];
        int type, sourceOfficeIndex, targetOfficeIndex;

        scanf("%i", &type);

        switch (type)
        {
        case 1:
            scanf("%s", townName);
            printAllPackages(findTown(townName));
            break;
        case 2:
            scanf("%*s%i%*s%i", &sourceOfficeIndex, &targetOfficeIndex);
            sendAllAcceptablePackages(sourceOfficeIndex, targetOfficeIndex);
            break;
        case 3:
            printf("Town with the most number of packages is %s\n", townWithMostPackages());
            break;
        }
    }

    return EXIT_SUCCESS;
}