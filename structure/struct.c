/*
** EPITECH PROJECT, 2018
** struct.c
** File description:
** functions who will display the person informations
*/

#include "struct.h"

int view_struct(t_person *person)
{
    my_putstr(person->first_name);
    my_putstr(person->last_name);
    my_put_nbr(person->phone_nb);
    return (0);
}
t_person *new_person(char *first_name, char *last_name, int phone_nb)
{
    t_person *person = malloc(sizeof(t_person));
    if (person == NULL)
        return (NULL);
    person->first_name = my_strdup(first_name);
    person->last_name = my_strdup(last_name);
    person->phone_nb = phone_nb;
    return (person);
}
int main(int ac, char **av)
{
    t_person *person;
    person = new_person("Sherlock ", "Holmes ", 4685392);
    view_struct(person);
    return (0);
}