#include "pathfinder.h"

static void find_paths(t_island *i) {
    // t_island *i = island;
    char *name = i->name;

    i->point = 0;
    while (i) {
        t_link *links = i->links;
        while (links) {
            if (i->point + links->weight <= links->linked_island->point 
                && !i->isvisited && i->point < 2147483647) {
                links->linked_island->point = i->point + links->weight;
                if (i->point != 0)
                    printf("%s -> %s, %d + %d = %d\n",name, links->linked_island->name,  i->point, + links->weight, i->point + links->weight);
                else
                    printf("%s -> %s, %d\n",name, links->linked_island->name,  i->point + links->weight);
            }
            links = links->next;
        }
        i = i->next;
    }
    printf("\n");
}

static void set_max_int(t_island *island) {
    t_island *iter = island;
    int max_int = 2147483647;

    while (iter && !iter->isvisited) {
        iter->point = max_int;
        iter = iter->next;
    }
}

void mx_do_algorithm(t_graph *m) {
    t_island *is = m->islands;

    for (int i = 0; i < m->V; i++) {
        set_max_int(is);
        find_paths(is);
        is->isvisited = true;
        is = is->next;
    }
}
