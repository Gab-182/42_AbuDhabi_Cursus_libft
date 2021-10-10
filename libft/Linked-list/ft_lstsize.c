/**
 * Counts the number of elements in a list.
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

/*--------------------------Required----------------------------*/
int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        i++;
        lst = lst -> next;
    }
    return (i);
}
/*------------------------------________----------------------------------*/
/*-----------------------------|Example|----------------------------------*/
/*
 * In This example:
 * 1. Create a new memory for a new struct.
 * 2. Allocate new element to the struct.
 * 3. Add another element to the first location of the struct.
 * 4. Calculate the SIZE of the created struct.
*/
/*------------------------------------------------------------------------*/

void    ft_lstadd_front(t_list **lst, t_list *new)
{
        if (new != NULL)
	    {
            new -> next = *lst;
            *lst = new;
        }
}
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
/*------------------------------------------------------------------------*/

int main()
{
    t_list *lst;
    t_list *new_lst;

    lst = ft_lstnew("Abdoush");
    new_lst = ft_lstnew("Ghaith");
    ft_lstadd_front(&lst, new_lst);
    
	printf("%d\n", ft_lstsize(lst));
	return (0);
}