#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
t_list	*create_node(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list *list = NULL;

	// Création de la liste pour le test
	list = create_node("Node 1");

	printf("Size of the list: %d\n", ft_list_size(list));

	// Libération de la mémoire (bonne pratique)
	t_list *tmp;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	return (0);
}