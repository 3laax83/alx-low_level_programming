#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int rand()
{
        static int gm = -1;
        ++gm;
        if (gm == 0)
                return (8);
        if (gm == 1)
                return (8);
        if (gm == 2)
                return (7);
        if (gm == 3)
                return (10);
        if (gm == 4)
                return (23);
        if (gm == 5)
                return (74);
        return (gm * gm % 75);
}