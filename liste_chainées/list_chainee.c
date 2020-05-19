/* Ce programme met dans une liste chainee ce qui lui est envoye en parametre.
   Ne l'utilisez pas tel quel ! Essayez de comprendre comment il fonctionne,
   puis refaites le sans regarder. */

#include 
#include 

struct s_attribute
{
    char *attribute;
    struct s_attribute *next;
};
typedef struct s_attribute t_attribute;

struct s_list
{
    char *tag;
    s_list *next;
typedef structs_list
{
    char *data;
    struct s_list *next;
}t_list;

t_list *put_arg_in_list(char **nb)
{
    int i;
    t_list *list; /* l'element deja remplie */
    t_list *new; /* l'element que je suis en train de remplir */

    /* Une liste chainee se remplit a l'envers. On part du dernier element,
       c'est a dire NULL puisque le dernier element de la liste pointe
       vers NULL */
    
    list = NULL; 
    i = 0;
    while (nb[i] != NULL)
    {
        new = malloc(sizeof(*new)); /* J'alloue en memoire mon nouvel element */
        new->data = nb[i]; /* Je le remplie */
        new->next = list; /* Je pointe vers l'element precedent (deja remplie) */
        list = new; /* Je mets mon element en 'deja rempli' */
        i++;
    }
    return (list); /* Je renvoie l'adresse du premier element de la liste.
                      Comme je remplie a l'envers, c'est le dernier element que j'ai creer. */
}

void aff_list_to_test(t_list *list)
{
    while (list != NULL)
    {
        write(1, list->data, 1); /* J'affiche l'element */
        write(1, " ", 1);
        list = list->next; /* Je passe a l'element suivant */
    }
    write(1, "\n", 1);
    /*
      Ici, j'affiche ma liste telle qu'elle a ete remplie, c'est a dire a l'envers.
      Si je veux la remplir a l'endroit, j'aurais pu mettre en la remplissant i = argc - 1 et i--
      Je peux aussi faire la fonction rev_list. Mais ca, c'est une autre histoire... ;-)
    */
}

int main(int argc, char **argv)
{
    t_list*list;
    
    if (argc > 1)
    {
        list = put_arg_in_list(&argv[1]);
        aff_list_to_test(list);
    }
    return (0);
}
