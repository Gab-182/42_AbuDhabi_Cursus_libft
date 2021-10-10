/***
 * Allocates (with malloc(3)) and returns a new element. 
 * The variable ’content’ is initialized with the value of the 
 * parameter ’content’. The variable ’next’ is initialized to NULL.
 * ---------------------------------------------------------------
 * So here we will allocate memory for the new list, aopy the (content)
 * to it, If the memory allocation fails then we will return NULL.
*/

# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/*---------------------------------------------------------------*/

t_list  *ft_lstnew(void *content)
{
		t_list	*new_list;

		new_list = (t_list *)malloc(sizeof(t_list));
		if (!new_list)
		{
			return (NULL);
		}
		/* Initialize The variable ’content’ with the value of the parameter ’content’*/
		new_list->content = content;

		/* The variable ’next’ is initialized to NULL*/
		new_list->next = NULL;

		return (new_list);
}