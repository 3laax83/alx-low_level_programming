#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int rand()
{
        static int ct = -1;
        ct++;
        if (ct == 0)
                return (8);
        if (ct == 1)
                return (8);
        if (ct == 2)
                return (7);
        if (ct == 3)
                return (10);
        if (ct == 4)
                return (23);
        if (ct == 5)
                return (74);
        return (ct * ct % 30000);
}