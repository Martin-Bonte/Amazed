/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** day06
*/

#include "../../include/lib.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] < s2[i]) {
            return (-1);
        }
        if (s1[i] > s2[i]) {
            return (1);
        }
        i++;
    }
    if (my_strlen(s1) > my_strlen(s2)) {
        return (1);
    } else if (my_strlen(s1) < my_strlen(s2)) {
        return (-1);
    }
    return (0);
}
