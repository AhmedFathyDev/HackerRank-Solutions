
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 6

struct package
{
    char *id;
    int weight;
};

typedef struct package package;

struct post_office
{
    int min_weight;
    int max_weight;
    package *packages;
    int packages_count;
};

typedef struct post_office post_office;

struct town
{
    char *name;
    int offices_count;
    post_office *offices;
};

typedef struct town town;

void printAllPackages(town t)
{
    printf("%s:\n", t.name);

    for (int i = 0; i < t.offices_count; i++)
    {
        printf("\t%d:\n", i);

        for (int j = 0; j < t.offices[i].packages_count; j++)
        {
            printf("\t\t%s\n", t.offices[i].packages[j].id);
        }
    }
}

void sendAllAcceptablePackages(town *source, int source_office_index,
                               town *target, int target_office_index)
{
    post_office *from = &(source->offices[source_office_index]), *to = &(target->offices[target_office_index]);
    package *returned = malloc(1);
    int returned_count = 0;

    for (int i = 0; i < from->packages_count; i++)
    {
        package pkg = from->packages[i];

        if (pkg.weight >= to->min_weight && pkg.weight <= to->max_weight)
        {
            to->packages_count++;
            to->packages = realloc(to->packages, sizeof(package) * to->packages_count);
            to->packages[to->packages_count - 1] = pkg;
        }
        else
        {
            returned = realloc(returned, sizeof(package) * ++returned_count);
            returned[returned_count - 1] = pkg;
        }
    }

    free(from->packages);

    from->packages = returned;
    from->packages_count = returned_count;
}

town townWithMostPackages(town towns[], int townsCount)
{
    int maxPackages = -1, packages, maxPackagesIndex;

    while (--townsCount > -1)
    {
        packages = 0;

        for (int i = 0; i < towns[townsCount].offices_count; i++)
        {
            packages += towns[townsCount].offices[i].packages_count;
        }

        if (packages > maxPackages)
        {
            maxPackages = packages;
            maxPackagesIndex = townsCount;
        }
    }

    return towns[maxPackagesIndex];
}

town *findTown(town towns[], int towns_count, char *name)
{
    int i = -1;

    while (++i < towns_count)
    {
        if (strcmp(name, towns[i].name) == 0)
        {
            break;
        }
    }

    return towns + i;
}

int main(void)
{
    int towns_count;

    scanf("%d", &towns_count);

    town *towns = malloc(sizeof(town) * towns_count);

    for (int i = 0; i < towns_count; i++)
    {
        towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);

        scanf("%s", towns[i].name);
        scanf("%d", &towns[i].offices_count);

        towns[i].offices = malloc(sizeof(post_office) * towns[i].offices_count);

        for (int j = 0; j < towns[i].offices_count; j++)
        {
            scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);

            towns[i].offices[j].packages = malloc(sizeof(package) * towns[i].offices[j].packages_count);

            for (int k = 0; k < towns[i].offices[j].packages_count; k++)
            {
                towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
                scanf("%s", towns[i].offices[j].packages[k].id);
                scanf("%d", &towns[i].offices[j].packages[k].weight);
            }
        }
    }

    int queries;

    scanf("%d", &queries);

    char town_name[MAX_STRING_LENGTH];

    while (queries--)
    {
        int type;

        scanf("%d", &type);

        switch (type)
        {
        case 1:
            scanf("%s", town_name);
            town *t = findTown(towns, towns_count, town_name);
            printAllPackages(*t);
            break;
        case 2:
            scanf("%s", town_name);
            town *source = findTown(towns, towns_count, town_name);
            int source_index;
            scanf("%d", &source_index);
            scanf("%s", town_name);
            town *target = findTown(towns, towns_count, town_name);
            int target_index;
            scanf("%d", &target_index);
            sendAllAcceptablePackages(source, source_index, target, target_index);
            break;
        case 3:
            printf("Town with the most number of packages is %s\n", townWithMostPackages(towns, towns_count).name);
            break;
        }
    }

    return EXIT_SUCCESS;
}