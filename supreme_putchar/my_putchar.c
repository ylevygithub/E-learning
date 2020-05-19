/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int  my_putchar(char c, int fd)
{
    if (write(fd, &c, 1) == -1)
        return (-1);
    return (0);
}
