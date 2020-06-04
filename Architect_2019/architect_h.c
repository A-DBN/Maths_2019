/*
** EPITECH PROJECT, 2019
** architect_h
** File description:
** architect_h
*/

#include <stdio.h>

void architect_h(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] = '-' && av[1][1] == 'h') {
            printf("USAGE\n    ./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...\n\n");
            printf("DESCRIPTION\n    x abscissa of the original point\n");
            printf("    y ordinate of the original point\n\n");
            printf("    transfo arg1 [arg2]\n    -t i j translation along vector (i, j)\n");
            printf("    -z m n scaling by factors m (x-axis) and n (y-axis)\n");
            printf("    -r d   rotation contered in 0 by a d degree angle\n");
            printf("    -s d   reflection over the axis passing through 0 with an inclination angle of d degrees\n");
        }
    }
}
