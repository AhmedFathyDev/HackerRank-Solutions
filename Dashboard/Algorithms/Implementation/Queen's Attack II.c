
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int main(void)
{
    int n, k, rQueen, cQueen;

    int rTObstacle = -1;
    int cTObstacle = -1;
    int rTRObstacle = -1;
    int cTRObstacle = -1;
    int rRObstacle = -1;
    int cRObstacle = -1;
    int rBRObstacle = -1;
    int cBRObstacle = -1;
    int rBObstacle = -1;
    int cBObstacle = -1;
    int rBLObstacle = -1;
    int cBLObstacle = -1;
    int rLObstacle = -1;
    int cLObstacle = -1;
    int rTLObstacle = -1;
    int cTLObstacle = -1;

    int reachableSquares = 0;

    scanf("%i %i %i %i", &n, &k, &rQueen, &cQueen);

    while (k--)
    {
        int rObstacle, cObstacle;
        scanf("%i %i", &rObstacle, &cObstacle);

        if ((rObstacle < rTObstacle || rTObstacle == -1) && rObstacle > rQueen && cObstacle == cQueen)
        {
            rTObstacle = rObstacle;
            cTObstacle = cObstacle;
        }
        else if (rObstacle - rQueen == cObstacle - cQueen && cObstacle > cQueen && rObstacle > rQueen && ((rObstacle < rTRObstacle && cObstacle < cTRObstacle) || rTRObstacle == -1))
        {
            rTRObstacle = rObstacle;
            cTRObstacle = cObstacle;
        }
        else if ((cObstacle < cRObstacle || cRObstacle == -1) && cObstacle > cQueen && rObstacle == rQueen)
        {
            rRObstacle = rObstacle;
            cRObstacle = cObstacle;
        }
        else if (rQueen - rObstacle == cObstacle - cQueen && cObstacle > cQueen && rObstacle < rQueen && ((rObstacle > rBRObstacle && cObstacle < cBRObstacle) || rBRObstacle == -1))
        {
            rBRObstacle = rObstacle;
            cBRObstacle = cObstacle;
        }
        else if ((rObstacle > rBObstacle || rBObstacle == -1) && rObstacle < rQueen && cObstacle == cQueen)
        {
            rBObstacle = rObstacle;
            cBObstacle = cObstacle;
        }
        else if (rQueen - rObstacle == cQueen - cObstacle && cObstacle < cQueen && rObstacle < rQueen && ((rObstacle > rBLObstacle && cObstacle > cBLObstacle) || rBLObstacle == -1))
        {
            rBLObstacle = rObstacle;
            cBLObstacle = cObstacle;
        }
        else if ((cObstacle > cLObstacle || cLObstacle == -1) && cObstacle < cQueen && rObstacle == rQueen)
        {
            rLObstacle = rObstacle;
            cLObstacle = cObstacle;
        }
        else if (cQueen - cObstacle == rObstacle - rQueen && cObstacle < cQueen && rObstacle > rQueen && ((rObstacle < rTLObstacle && cObstacle > cTLObstacle) || rTLObstacle == -1))
        {
            rTLObstacle = rObstacle;
            cTLObstacle = cObstacle;
        }
    }

    reachableSquares += rTObstacle != -1 ? rTObstacle - rQueen - 1 : n - rQueen;
    reachableSquares += rTRObstacle != -1 ? cTRObstacle - cQueen - 1 : MIN(n - cQueen, n - rQueen);
    reachableSquares += cRObstacle != -1 ? cRObstacle - cQueen - 1 : n - cQueen;
    reachableSquares += cBRObstacle != -1 ? cBRObstacle - cQueen - 1 : MIN(n - cQueen, rQueen - 1);
    reachableSquares += rBObstacle != -1 ? rQueen - rBObstacle - 1 : rQueen - 1;
    reachableSquares += rBLObstacle != -1 ? cQueen - cBLObstacle - 1 : MIN(cQueen - 1, rQueen - 1);
    reachableSquares += cLObstacle != -1 ? cQueen - cLObstacle - 1 : cQueen - 1;
    reachableSquares += cTLObstacle != -1 ? cQueen - cTLObstacle - 1 : MIN(n - rQueen, cQueen - 1);

    printf("%i", reachableSquares);

    return EXIT_SUCCESS;
}