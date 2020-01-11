#include "pathfinder.h"

void mx_set_paths_to_null(t_graph *m) {
    t_island *iter = m->islands;
    int index = 0;

    while (iter) {
        iter->index = index;
        iter->paths = malloc(sizeof(t_path *) * m->V);
        for (int index = 0; index < m->V; index++)
            iter->paths[index] = NULL;
        index++;
        iter = iter->next;
    }
}

t_graph *mx_create_graph() {
    t_graph *m = malloc(sizeof(t_graph));

    m->filename = NULL;
    m->islands = NULL;
    m->start = NULL;
    m->end = NULL;
    m->start_remainder = NULL;
    return m;
}

int main(int argc, char **argv) {
    t_graph *m;
    char *text = mx_file_to_str(argv[1]);

    m = mx_create_graph();
    if (!mx_validation(argc, argv, m))
        return 0;
    m->filename = argv[1];
    m->lines = mx_strsplit(text, '\n');
    mx_parse_file(m);
}
