#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *node = mx_create_node(data);
    t_list *temp;

    if (list == NULL || data == NULL)
    {
        *list = mx_create_node(data);
        return;
    }
    temp = *list;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = node;
}
