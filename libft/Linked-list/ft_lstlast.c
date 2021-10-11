/*
 * Returns the last element of the list.
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

/*--------------------------Required function----------------------------*/
t_list  *ft_lstlast(t_list *lst)
{

    if (!lst)
    {
        return (NULL);
    }
    // While the next element of the struct is not a NULL.
    while (lst -> next)
    {
        lst = lst -> next;
    }
    return (lst);
}

/*------------------------------________----------------------------------*/
/*-----------------------------|Example|----------------------------------*/
/*
 * In This example:
 * 1. Create a new memory for a new struct.
 * 2. Allocate new element to the struct.
 * 3. Add another element to the first location of the struct.
 * 4. Return the last element of the created struct.
*/
/*------------------------------------------------------------------------*/

void    ft_lstadd_front(t_list **lst, t_list *new)
{
        if (!(*lst))
            *lst = new;
        new -> next = *lst;
        *lst = new;
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
    t_list *last_element;

    lst = ft_lstnew("Abdoush");
    new_lst = ft_lstnew("Ghaith");
    ft_lstadd_front(&lst, new_lst);
    
    last_element = ft_lstlast(lst);

	printf("%s\n", (char *)last_element -> content);
	return (0);
}
/*------------------------------------------------------------------------*/
