#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>

int lsh_launch(char **args);
char **lsh_split_line(char *line);
void read_command ();
void type_prompt();

#endif
