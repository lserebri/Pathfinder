#include "pathfinder.h"

static void find_paths(t_island *iland) {
    t_island *i = iland;
    t_link *links = iland->links;
    // char *name = i->name;

    i->point = 0;
    while (i) {
        printf("Island = %s\n", i->name);
        while (links) {
            printf("linked island = %s\n", links->linked_island->name);
            if (i->point + links->weight <= links->linked_island->point) {
                links->linked_island->point = i->point + links->weight;
                // if (i->point != 0)
                //     printf("%s -> %s, %d + %d = %d\n",name, links->linked_island->name,  i->point, + links->weight, i->point + links->weight);
                // else
                //     printf("%s -> %s, %d\n",name, links->linked_island->name,  i->point + links->weight);
                }
            links = links->next;
        }
        i = i->next;
    }

}

static void set_max_int(t_island *island) {
    t_island *iter = island;
    int max_int = 2147483647;

    while (iter) {
        iter->point = max_int;
        iter = iter->next;
    }
}

void mx_do_algorithm(t_graph *m) {
    t_island *is = m->islands;
    set_max_int(is);
    find_paths(is);
    // set_max_int(is);
    // find_paths(is);
    // printf("pointl1 = %s\n", is->links->linked_island->name);
    // set_max_int(is);
    // find_paths(is->next);
    // for (int i = 0; i < m->V; i++) {
    //     set_max_int(m->islands);
    //     find_paths(is);
    //     is = is->next;
    // }
    // printf("count of Islands = %d\n", m->V);
    // while (m->islands)
    // {
    //     printf("island = %s ", m->islands->name);
    //     // printf("Point = %d     ", m->islands->point);
    //     while (m->islands->links) {
    //         printf("linked island = %s ", m->islands->links->linked_island->name);
    //         printf("weight = %d     ", m->islands->links->weight);
    //         m->islands->links = m->islands->links->next;
    //     }
    //     printf("\n");
    //     m->islands = m->islands->next;
    // }
}
