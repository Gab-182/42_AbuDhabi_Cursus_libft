/*
 * Adds the element ’new’ at the end of the list (lst).
 * If (lst) is NULL, make (new) as a new element of (lst) 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

/***
 * • content : The data contained in the element. The void * allows to store any kind
 *	of data.
 * • next : The next element’s address or NULL if it’s the last element.
*/

/*------------------------Additional function---------------------------*/

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
    {
        return (NULL);
    }
    while (lst->next)
    {
        lst = lst->next;
    }
    return (lst);
}
/*--------------------------Required function----------------------------*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last_element;

    if (*lst == NULL)
    {
        *lst = new;
    }
    last_element = *lst;

    // To make the pointer (last_element)reach the last element of the (lst).
    while (last_element -> next)
    {
        last_element = last_element -> next;
    }
    // Put (new) in the position of (next) element after (last_element -> content) 
    last_element -> next = new;
    // Then terminate the whole struct with NULL by terminating (new) struct with NULL.
    new -> next = NULL;
}

/*------------------------------________----------------------------------*/
/*-----------------------------|Example|----------------------------------*/
/*
 * In This example:
 * 1. Create a new memory for a new struct.
 * 2. Allocate new element to the struct.
 * 3. Add another element to the first location of the struct.
 * 4. Adding the struct (new) the last position of the struct (lst).
*/
/*------------------------------------------------------------------------*/
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new != NULL)
    {
        new->next = *lst;
        *lst = new;
    }
}
t_list *ft_lstnew(void *content)
{
    t_list *new_list;

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
    t_list *add_first;
    t_list *add_last;

    lst = ft_lstnew("Antoun");
    add_first = ft_lstnew("Ghaith");
    add_last = ft_lstnew("Abdoush");

    ft_lstadd_front(&lst, add_first);
    ft_lstadd_back(&lst, add_last);

    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
    return (0);
}
/*------------------------------------------------------------------------*/