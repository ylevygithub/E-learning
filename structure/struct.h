/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** struct who contains first name, last name and the phone number of the person 
*/

#ifndef TEST_H_
#define TEST_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_person t_person;
struct s_person {
    char *first_name;
    char *last_name;
    int phone_nb;
};

int my_put_nbr(int nb);
void my_putchar(char );
void my_putstr(char *);
int my_strlen(char *);

int view_struct(t_person *person);
t_person *new_person(char *first_name, char *last_name, int phone_nb);
char *my_strdup(char *);
#endif /* TEST_H_ */
