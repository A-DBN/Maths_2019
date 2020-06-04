/*
** EPITECH PROJECT, 2019
** pong
** File description:
** make a pong
*/

#include <stdio.h>

void pongh(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] = '-' && av[1][1] == 'h') {
            printf("USAGE\n    ./101pong x0 y0 z0 x1 y1 z1 n\n\n" );
            printf("DESCRIPTION\n    x0 ball abscissa at time t -1\n");
            printf("    y0 ball ordinate at time t-1\n");
            printf("    z0 ball altitude at time t-1\n");
            printf("    x1 ball abscissa at time t\n    y1 ball ordinate at time t\n");
            printf("    z1 ball altitude at time t\n");
            printf("    n  time shift (greater than or equal to zero, integer)\n");
        }
    }
}
