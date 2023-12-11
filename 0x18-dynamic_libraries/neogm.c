#include <stdio.h>
#include <stdlib.h>

int neogm()
{
        static int gm = -1;

        gm++;
        switch (gm)
        {
                case 0:
                        return (8);
                case 1:
                        return (8);
                case 2:
                        return (7);
                case 3:
                        return (9);
                case 4:
                        return (23);
                case 5:
                        return (74);
                default:
                        return (gm * gm % 30000);
        }
}