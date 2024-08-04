#include "push_swap.h"

static t_list *get_next_min(t_list **stack)
{
    t_list *head;
    t_list *min;
    int mini;

    head = *stack;
    min = NULL;
    mini = 0;
    if(head)
    {
        while(head)
        {
            if((head -> index == -1) && (!mini || (head -> value < min -> value)))
            {
                mini = 1;
                min = head;
            }
            head = head -> next;
        }
    }
    return (min);
}

void index_stack(t_list **stack)
{
    int index;
    t_list *head;

    index = 0;
    head  = get_next_min(stack);
    while(head)
    {
        head -> index = index++;
        head = get_next_min(stack);
    }
}
