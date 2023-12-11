#include <stdio.h>
#include <stdlib.h>

int neogm()
{
        static int gm = 0;

        switch (gm)
        {
                case 0:
                        return (9);
                case 1:
                        return (9);
                case 2:
                        return (8);
                case 3:
                        return (10);
                case 4:
                        return (24);
                case 5:
                        return (75);
                default:
                        return (gm * gm % 30000);
        }
}