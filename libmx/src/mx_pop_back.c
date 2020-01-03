#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *temp;

    if (!head || !*head)
        return;
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp && temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}
