/*
** EPITECH PROJECT, 2019
** pong
** File description:
** make a pong
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "include/my.h"

int error(int ac, char **av)
{
    int i = 0;

    if (ac != 8 && ac != 2) {
        printf("Missing argument or too much arguments.\n");
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        pongh(ac, av);
        return (0);
    }
    if (av[7][0] == '-') {
        return (84);
    }
    if (av[7][0] < 48 && av[7][0] > 57) {
        printf("Wrong argument");
        return (84);
    }
    return (0);
}

void velocity(char **av)
{
    float x = 0;
    float y = 0;
    float z = 0;

    x = strtof(av[4], NULL) - strtof(av[1], NULL);
    y = strtof(av[5], NULL) - strtof(av[2], NULL);
    z = strtof(av[6], NULL) - strtof(av[3], NULL);
    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", x, y, z);
}

void coordonate(char **av, float x, float y, float z)
{
    float a = 0;
    float b = 0;
    float c = 0;
    float n = strtof(av[7], NULL);

    a = x * n + strtof(av[4], NULL);
    b = y * n + strtof(av[5], NULL);
    c = z * n + strtof(av[6], NULL);
    printf("At time t + %s", av[7]);
    printf(", ball coordinates will be:\n");
    printf("(%.2f, %.2f, %.2f)\n", a, b, c);
}

int main(int ac, char **av)
{
    float x = 0;
    float y = 0;
    float z = 0;
    float ang = 0;
    float rad = 0;

    if (ac != 8 || av[7][1] == '.') {
        if (error(ac, av)) {
            return (84);
        }
    }
    if (ac == 8) {
        x = strtof(av[4], NULL) - strtof(av[1], NULL);
        y = strtof(av[5], NULL) - strtof(av[2], NULL);
        z = strtof(av[6], NULL) - strtof(av[3], NULL);
        velocity(av);
        coordonate(av, x, y, z);
        if (av[6][0] != '-' && z <= 0) {
            x = strtof(av[4], NULL) - strtof(av[1], NULL);
            y = strtof(av[5], NULL) - strtof(av[2], NULL);
            z = strtof(av[6], NULL) - strtof(av[3], NULL);
            ang = sqrt(pow(-y, 2) + pow(x, 2)) / sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
            rad = acos(ang) * 57.2958;
            printf("The incidence angle is:\n%.2f degrees\n", rad);
        }
        else
            printf("The ball won't reach the paddle.\n");
    } else
         return (84);
}
