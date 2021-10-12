/***
 * Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
 * 
 * #1. The adress of a pointer to an element. 
 * #2. The adress of the function used to iterate on the list.
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

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
		if (lst != NULL)
		{
			while (lst)
			{
				f(lst -> content);
				lst = lst -> next;
			}
		}
}