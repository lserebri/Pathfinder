#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *temp;

    if (!head && !*head)
        return;
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }
}
