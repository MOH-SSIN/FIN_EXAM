#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int cmp_str(void *a, void *b)
{
    return (strcmp((char *)a, (char *)b));
}

t_list *create_node(void *data)
{
    t_list *new_node;
    new_node = malloc(sizeof(t_list));
    if(!new_node)
        return(NULL);
    new_node->data = data;
    new_node->next = NULL;
    return(new_node);
}

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp);
	}
}

int main()
{
    t_list *list;

    list = create_node("ikram");
    list->next = create_node("dahhan");
    list->next->next = create_node("mohcine");

    ft_list_remove_if(&list, "ikram", cmp_str);

    while (list)
    {
        print_data(list->data);
        list = list->next;
    } 
}