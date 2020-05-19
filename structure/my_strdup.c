#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int nb = 0;

    while (str[nb] != '\0')
    {
        my_putchar(str[nb]);
        nb++;
    }
}

int my_strlen(char const *str)
{
    int nb;

    nb = 0;
    while (str[nb] != '\0')
    {
            nb = nb + 1;
    }
    return (nb);
}
char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*
int main ()
{
    my_putstr(my_strdup("hello"));
    return (0);
}*/