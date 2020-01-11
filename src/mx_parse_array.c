#include "pathfinder.h"

static void parse_line(t_graph *m, char *line) {
    char **str;
    char *str1;
    t_island *island1;
    t_island *island2;
    int weight;

    str = mx_strsplit(line, '-');
    island1 = mx_get_island(&m->islands, mx_strdup(str[0]));
    str1 = mx_strdup(str[1]);
    mx_del_strarr(&str);
    str = mx_strsplit(str1, ',');
    mx_strdel(&str1);
    island2 = mx_get_island(&m->islands, mx_strdup(str[0]));
    weight = mx_atoi(str[1]);
    mx_del_strarr(&str);
    mx_set_link(&island1->links, island2, weight);
    mx_set_link(&island2->links, island1, weight);
}

void mx_parse_array(t_graph *m) {
    int i = 1;

    while (m->lines[i])
    {
        parse_line(m, m->lines[i]);
        i++;
    }
    printf("count of Islands = %d\n", m->V);
    while (m->islands)
    {
        printf("island = %s ", m->islands->name);
        while (m->islands->links) {
            printf("linked island = %s ", m->islands->links->linked_island->name);
            printf("weight = %d     ", m->islands->links->weight);
            m->islands->links = m->islands->links->next;
        }
        printf("\n");
        m->islands = m->islands->next;
    }
}
