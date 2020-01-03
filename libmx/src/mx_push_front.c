#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
    if (!list)
        return;
    t_list *node = mx_create_node(data);
    if (node)
    {
        node->next = *list;
        *list = node;
    }
}
