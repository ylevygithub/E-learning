#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

Test(cat1, fixed_inputs)
{
    char str1[100] = "\0";
    char *str2 = "world";
    char *res = my_strcat(str1, str2);
    

    cr_expect( my_strcmp(res, "world") == 0, "Adding 2 and 2 failed");
}

Test(cat, fixed_input)
{
    char str1[100] = "\0";
    char *str2 = "world";
    char *res = my_strcat(str1, str2);


    cr_expect( my_strcmp(res, "nkitout") == 0, "Adding 2 and 2 failed");
}
