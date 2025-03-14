#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

t_list *create_node(void *data)
{
    t_list *new_node;
    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return(NULL);
    new_node->data = data;
    new_node->next = NULL;
    return(new_node);
}

int main(void)
{
    t_list *list;

    list = create_node("First");
    list->next = create_node("Second");
    list->next->next = create_node("Third");

    ft_list_foreach(list, &print_data);

    // // Libération de la mémoire
    // t_list *tmp;
    // while (list)
    // {
    //     tmp = list->next;
    //     free(list);
    //     list = tmp;
    // }

    return (0);
}
