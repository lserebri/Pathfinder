#include "libmx.h"

int mx_list_size(t_list *list) {
    int n = 0;

    if (!list)
        return 0;
    t_list *temp = list;
    for(;temp != NULL; n++)
        temp = temp->next;
    return n;
}
