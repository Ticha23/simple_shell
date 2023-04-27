#ifndef SHELL_H_
#define SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

int cmp_str(char *str1, char *str2);
int verification(char **arguments);
char *_stringupa(char *str);
char *command_conca(char *dir_path, char *command);
int exec(char **arguments);
int accept(char *entry, char **arguments);
int prints_spray(int n);
int len_str(const char *string);
int prints_error(char **arguments, int counter);
char *set_env(char *global_var);
int chill(const char *prompt, unsigned int size);
int _putchar(char c);
int exist(char *pathname);
void grid_fring(char **grid, int heigth);
void last_leave(char *entry);
int terminal(char **arguments, int exit_stat);

#endif

