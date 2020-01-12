#include "pathfinder.h"

static void find_paths(t_graph *m) {
    //t_island *i = m->islands;

    m->islands->point = 0;
    while (m->islands) {
        while (m->islands->links) {
            if (m->islands->point + m->islands->links->weight 
                <= m->islands->links->linked_island->point) {
                m->islands->links->linked_island->point = m->islands->point + m->islands->links->weight;
                printf("%s -> %s, %d\n",m->islands->name, m->islands->links->linked_island->name,  m->islands->point + m->islands->links->weight);
                }
            m->islands->links = m->islands->links->next;
        }
        m->islands->isvisited = true;
        m->islands = m->islands->next;
    }

}

static void set_max_int(t_island **island) {
    t_island *iter = *island;
    int max_int = 2147483647;

    while (iter) {
        iter->point = max_int;
        iter = iter->next;
    }
}

void mx_do_algorithm(t_graph *m) {
    set_max_int(&m->islands);
    find_paths(m);
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
