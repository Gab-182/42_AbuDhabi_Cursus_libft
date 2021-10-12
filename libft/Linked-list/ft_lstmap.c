/***
 * Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
 * Creates a new list resulting of the successive applications of the function ’f’. 
 * The ’del’ function is used to delete the content of an element if needed.
 * 
 * The new list. NULL if the allocation fails.
 * 
 * #1. The adress of a pointer to an element. 
 * #2. The adress of the function used to iterate on the list. 
 * #3. The adress of the function used to delete the content of an element if needed.
 * 
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
	of data.
 * • next : The next element’s address or NULL if it’s the last element.
*/
/*------------------------Additional function---------------------------*/

t_list  *ft_lstnew(void *content)
{
		t_list	*new_list;

		new_list = (t_list *)malloc(sizeof(t_list));
		if (!new_list)
			return (NULL);
		new_list->content = content;
		new_list->next = NULL;
		return (new_list);
}
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
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last_element;

    if (*lst == NULL)
        *lst = new;
    last_element = *lst;
    while (last_element -> next)
        last_element = last_element -> next;
    last_element -> next = new;
    new -> next = NULL;
}
/*--------------------------Required function----------------------------*/

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
		t_list	*new_lst;
		t_list	*temp_element;

		new_lst = NULL;
		if (!lst)
			return (NULL);
		while (lst)
		{
			temp_element = ft_lstnew(f(lst -> content));
			/* Clear the new_lst and return NULL if the allocation fails.*/
			if (!temp_element)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, temp_element);
			lst = lst->next;
		}
		return (new_lst);
}