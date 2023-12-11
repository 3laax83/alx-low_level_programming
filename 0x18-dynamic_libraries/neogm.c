#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int rand()
{
        static int gm = -1;

        gm++;
        if (gm == 0)
                return (8);
        if (gm == 1)
                return (9);
        if (gm == 2)
                return (7);
        if (gm == 3)
                return (9);
        if (gm == 4)
                return (23);
        if (gm == 5)
                return (74);
        return (gm * gm % 30000);
}