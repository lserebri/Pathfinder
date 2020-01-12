#ifndef PATHFINDER_H_
	#define PATHFINDER_H_

    #include "libmx.h"

    typedef struct s_island t_island;
    typedef struct s_link t_link;
    typedef struct s_graph t_graph;
    typedef struct s_path t_path;

    struct s_island{
        int index;
        int point;
        char *name;
        bool isvisited;
        t_link *links;             // linked islands list
        t_path **paths;            // path to each island
        t_island *next;
    };

    struct s_link {
        int weight;                // weight between parent and linked island
        t_island *linked_island;
        t_link *next;
    };

    struct s_graph {
        int V;                     // islands count
        char *filename;            // for file_to_str
        char **lines;              // for file_to_str
        t_island *islands;         // all islands
        t_island *start;           // for find_path
        t_island *end;             // for find_path
        int weight;                // for find_path
        t_island *start_remainder; // for find_path
    };

    struct s_path {
        t_link *route;
        int weight;                // summary weight of route
        bool is_shortest;          // true if dist of path is minimum in list of paths
        t_path *next;
    };
    
    t_graph *mx_create_graph();
    void mx_parse_array(t_graph *m);
    void mx_parse_file(t_graph *m);
    t_island *mx_get_island(t_island **islands, char *name);
    t_island *mx_create_island(char *name);
    void mx_add_island(t_island **islands, t_island *i);
    t_link *mx_create_link(t_island *linked_island);
    void mx_add_link(t_link **links, t_link *l);
    void mx_push_back_link(t_link **links, t_link *l);
    void mx_pop_back_link(t_link **links);
    void mx_set_link(t_link **links, t_island *linked_island, int weight);
    void mx_do_algorithm(t_graph *m);


    // functions for validation ------------------------------
    int mx_validation(int count, char **inpt, t_graph *m);
    int mx_output_validresult(int count, char **inpt);
    int mx_valid_line1(char *line, char *text, t_graph *m);
    int mx_valid_lines(char *text);
    int mx_valid_islands(char **lines);
    // -------------------------------------------------------
#endif
