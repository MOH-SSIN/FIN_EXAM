#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}
t_list *create_node(int data)
{
    t_list *new_node;
    new_node = malloc(sizeof(t_list));
    if(!new_node)
        return(NULL);
    new_node->data = (void *)(long)data;
    new_node->next = NULL;
    return(new_node);
}

void print_data(void *data)
{
    printf("%d\n", (int)data);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int *swap;
	t_list *tmp;

	tmp = lst;
	while (lst->next != 0)
	{
		if (cmp((int)lst->data, (int)lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

// t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
// {
//     int swap;
//     t_list *tmp;
//     tmp = lst;
//     while(lst->next != 0)
//     {
//         if (cmp((int)lst->data, (int)lst->next->data) == 0)
//         {
//             swap = lst->data;
//             lst->data = lst->next->data;
//             lst->next->data = swap;
//             lst = tmp;
//         }
//         else
//             lst = lst->next;
//     }
//     lst = tmp;
//     return(lst);
// }
int main()
{
    t_list *list;

    list = create_node(5);
    list->next = create_node(4);
    list->next->next = create_node(1);

    list = sort_list(list, ascending);

    while (list)
    {
        print_data(list->data);
        list = list->next;
    } 
}