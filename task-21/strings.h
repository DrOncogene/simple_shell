#ifndef STRINGS_H
#define STRINGS_H
int str_cmp(char *s1, char *s2);
int str_ncmp(char *s1, char *s2, size_t n);
unsigned long int str_len(char *s);
char *mem_cpy(char *dest, const char *src, size_t n);
char *str_dup(char *s);

#endif
