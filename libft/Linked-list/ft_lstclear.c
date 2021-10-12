/**
 * Deletes and frees the given element and every successor of that element, 
 * using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 * 
 * #1. The adress of a pointer to an element.
 * #2. The adress of the function used to delete the content of the element.
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct 	s_list	*next;
}			t_list;


/***
 * • content : The data contained in the element. The void * allows to store any kind
 *	of data.
 * • next : The next element’s address or NULL if it’s the last element.
*/

/*--------------------------Required function----------------------------*/
void    ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current_element;
	t_list *next_element;

	current_element = *lst;
	if (*lst != NULL)
	{
		while (current_element != NULL)
		{
			next_element = current_element -> next;
			ft_lstdelone(current_element, del);
			current_element = next_element;
		}
	}
	*lst = NULL;
}