/*
** EPITECH PROJECT, 2019
** arg_option.c
** File description:
** arg_option.c
*/

#include <stdio.h>

void find_arg(int ac, char** av)
{
    int i = 0;

    while (av[i] != NULL) {
        if (av[i][0] == '-' && av[i][1] == 't') {
            printf("Translation along vector (%s, %s)\n", av[i + 1], av[i + 2]);
        }

        if (av[i][0] == '-' && av[i][1] == 'z') {
            printf("Scaling by factors %s and %s\n", av[i + 1], av[i + 2]);
        }

        if (av[i][0] == '-' && av[i][1] == 'r') {
            printf("Rotation by a %s degree angle\n", av[i + 1]);
        }

        if (av[i][0] == '-' && av[i][1] == 's') {
            printf("Reflection over an axis with an inclination angle of %s degrees\n", av[i + 1]);
        }
        i++;
    }
}
