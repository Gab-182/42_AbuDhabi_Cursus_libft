/***
 * Adds the element ’new’ at the beginning of the list (lst).
 * 
 * We need to change the (next) of the (new) to keeps the address
 * of the pointer that point to the head of the list. Then the pointer
 * keeps the address of the new element.
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

void    ft_lstadd_front(t_list **lst, t_list *new)
{
        if (!(*lst))
        {
            *lst = new;
        }
        if (new != NULL)
        {
            /*
            * Make the [(next) element from(new) struct] points to the
            * first element of the struct (lst). 
            */
            new -> next = *lst;
            /*
            * THEN, Make the pointer (lst) point to the first element of 
            * the strust (new),
            * 
            * So now the first element from (new) struct, will be 
            * pointed to by (lst) now.
            */
            *lst = new;
        }
}

/*------------------------------________----------------------------------*/
/*-----------------------------|Example|-----------------------------------*/

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
int main()
{
    t_list *lst;
    t_list *new_lst;

    lst = ft_lstnew("Abdoush");
    new_lst = ft_lstnew("Ghaith");

    // Make (new_lst) struct as the first element of (lst) struct.
    ft_lstadd_front(&lst, new_lst);

    // Printing the whole (lst) struct to make sure.
    while (lst)
    {
        // cause (content) is type void*, we need to cast it to type char*.
	    printf("%s\n", (char *)lst -> content);
        // Moving the pointer (lst) to the next memory address.
        lst = lst -> next;
    }
	return (0);
}

/***
 * NOTE
 * ====
 * You will understand this example very will if you use 
 * https://pythontutor.com/c.html#mode=edit
 * to visualize the whole procces.
*/