# ifndef MAIN_H
# define MAIN_H
int _putchar(char);
int _strlen(char *);
unsigned int _ustrlen(char *);
char *create_array(unsigned int, char);
char *_strdup(char *str);
char *str_concat(char *,char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *,unsigned int);
# endif
