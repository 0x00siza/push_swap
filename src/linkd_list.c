#include "push_swap.h"

t_list *ft_lstnew(int value)
{
    t_list *new_node;
    
    new_node = malloc(sizeof(t_list));
    if(!new_node)
        return NULL;
    new_node -> value = value;
    new_node -> index = -1;
    new_node -> next = NULL;
    return (new_node);
}

void	ft_lstadd_front(t_list **stack, t_list *new)
{
    new -> next = *stack;
    *stack = new;

}
t_list	*ft_lstlast(t_list *head)
{
    t_list *tmp;

    tmp = head;
    while(tmp -> next !=  NULL)
    {
        tmp = tmp -> next;
    }
    return(tmp);
}
void	ft_lstadd_back(t_list **stack, t_list *new)
{
    t_list *last_node;
    t_list *head;

    head = *stack;
    if(!head)
    {
        head = new;
        new -> next = NULL;
    }
    else
    {
        last_node = ft_lstlast(head);
        last_node -> next = new;
        new -> next = NULL;
    }
}

int	ft_lstsize(t_list *head)
{
    t_list *tmp;
    int i;

    tmp = head;
    i = 0;

    while(tmp)
    {
        i++;
       tmp = tmp -> next;
    }
    return (i);
}
