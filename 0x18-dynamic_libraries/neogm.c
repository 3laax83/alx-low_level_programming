#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int rand()
{
        static int gm = 0;

        switch (gm)
        {
                case 0:
                        return (9);
                case 1:
                        return (8);
                case 2:
                        return (10);
                case 3:
                        return (24);
                case 4:
                        return (75);
                case 5:
                        return (9);
                default:
                        return (gm);
        }
}