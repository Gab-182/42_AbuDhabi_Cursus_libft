/**
 * Takes as a parameter an element and frees the memory of the element’s content 
 * using the function ’del’ given as a parameter and free the element.
 * The memory of ’next’ must not be freed.
 * 
 * #1. The element to free.
 * #2. The address of the function used to delete the content.
 * -----------------------------------------------------------------------
 * Notes:
 * =====
 * free(), works on the [Heap memory], not on the [Stack memory].
 * 
 * You can only free the memory from the pointer to it that returned 
 * by malloc.
 * 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

/*------------------------------------------------------------------------*/

/***
 * • content : The data contained in the element. The void * allows to store any kind
 *	of data.
 * • next : The next element’s address or NULL if it’s the last element.
*/

/*--------------------------Required function----------------------------*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
		if (lst != NULL)
		{
			del(lst -> content);
			free(lst);
		}
}