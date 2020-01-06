#ifndef PATHFINDER_H_
	#define PATHFINDER_H_

    #include "libmx.h"

    int mx_validation(int count, char **inpt);
    int mx_output_validresult(int count, char **inpt);
    int mx_valid_line1(char *line, char *text);
    int mx_valid_lines(char *text);
    int mx_valid_islands(char **lines);
#endif
