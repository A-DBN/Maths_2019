/*
** EPITECH PROJECT, 2019
** 102architect
** File description:
** 102architect
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void architect_h(int ac, char **av);

int find_arg(int ac, char **av);

int error(int ac, char **av);

int main(int ac, char **av)
{
    int i = 0;
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    float e = 0;
    float f = 0;
    float g = 0;
    float h = 0;
    float j = 0;

    if (ac == 1) {
        printf("Missing argument\n");
        return (0);
    }
    if (ac > 13) {
        printf("Too many arguments\n");
        return (0);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        architect_h(ac, av);
        return (0);
    }
    find_arg(ac, av);
    while (av[i] != NULL) {
        if (av[i][1] == 't') {
            c = c + strtof(av[i + 1], NULL);
            f = f + strtof(av[i + 2], NULL);
            a = a + 1;
            e = e + 1;
            j = j + 1;
        }
        if (av[i][1] == 'z') {
            a = a + strtof(av[i + 1], NULL);
            e = e + strtof(av[i + 2], NULL);
            j = j + 1;
        }
        if (av[i][1] == 'r') {
            a = a + cos(strtof(av[i + 1], NULL)* (M_PI / 180));
            b = b - sin(strtof(av[i + 1], NULL) * (M_PI / 180));
            d = d + sin(strtof(av[i + 1], NULL) * (M_PI / 180));
            e = e + cos(strtof(av[i + 1], NULL) * (M_PI / 180));
            j = j + 1;
        }
        if (av[i][1] == 's') {
            a = a + (pow(cos(strtof(av[i+1], NULL)), 2) - pow(sin(strtof(av[i+1], NULL)), 2) * (M_PI/180));
            b = b + (2 * (cos(strtof(av[i+1], NULL)) * sin(strtof(av[i+1],NULL))) * (M_PI/180));
            d = d + (2 * (cos(strtof(av[i+1], NULL)) * sin(strtof(av[i+1],NULL))) * (M_PI/180));
            e = e + (pow(sin(strtof(av[i+1], NULL)), 2) - pow(cos(strtof(av[i+1], NULL)), 2) * (M_PI/180));
            j = j + 1;
        }
        i++;
    }
    printf("%.2f    %.2f    %.2f\n", a, b, c);
    printf("%.2f    %.2f    %.2f\n", d, e, f);
    printf("%.2f    %.2f    %.2f\n", g, h, j);
    printf("(%.2f, %.2f) =>", strtof(av[1],NULL), strtof(av[2], NULL));
    return (0);
}
