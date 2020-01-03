#ifndef LIBMX_H_
	#define LIBMX_H_

	#include <stdio.h> //comment this
	#include <stdlib.h>
	#include <unistd.h>
	#include <string.h> //comment this
	#include <fcntl.h>
	#include <malloc/malloc.h>
	#include <stdbool.h>

	typedef struct s_list {
	void *data;
	struct s_list *next;
	} t_list;

	//MY EXTRA FUNCTIONS--------------------------------------------------------------------------------
	int mx_strncmp(const char *s1, const char *s2, int len);
	int mx_file_length(const char *file);
	char **mx_allocate_memory(const char *s, char c);
	char *mx_replacesub(int length, const char *str, const char *sub, const char *replace);
	int mx_isspace(int argument);

	//LIBRARY FUNCTION----------------------------------------------------------------------------------

	void mx_print_unicode(wchar_t c);
	int mx_strlen(const char *s);
	double mx_pow(double n, int pow);
	void mx_printstr(const char *s);
	void mx_printchar(char c);
	void mx_print_strarr(char **arr, const char *delim);
	void mx_printint(int n);
	int mx_strcmp(const char *s1, const char *s2);
	char *mx_strcat(char *restrict s1, const char *restrict s2);
	int mx_binary_search(char **arr, int size, const char *s, int *count);
	int mx_quicksort(char **arr, int left, int right);
	int mx_bubble_sort(char **arr, int size);
	int mx_factorial_iter(int n);
	void mx_foreach(int *arr, int size, void (*f)(int));
	unsigned long mx_hex_to_nbr(const char *hex);
	char *mx_strnew(const int size);
	int mx_sqrt(int x);
	char *mx_itoa(int number);
	char *mx_strcpy(char *dst, const char *src);
	char *mx_nbr_to_hex(unsigned long nbr);
	char *mx_strdup(const char *str);
	void mx_swap_char(char *s1, char *s2);
	void mx_str_reverse(char *s);
	void mx_strdel(char **str);
	void mx_del_strarr(char ***arr);
	int mx_get_char_index(const char *str, char c);
	char *mx_strncpy(char *dst, const char *src, int len);
	char *mx_strndup(const char *s1, size_t n);
	char *mx_strstr(const char *haystack, const char *needle);
	int mx_get_substr_index(const char *str, const char *sub);
	int mx_count_substr(const char *str, const char *sub);
	int mx_count_words(const char *str, char c);
	char *mx_strtrim(const char *str);
	char *mx_del_extra_spaces(const char *str);
	char **mx_strsplit(const char *s, char c);
	char *mx_strjoin(const char *s1, const char *s2);
	char *mx_file_to_str(const char *file);
	char *mx_replace_substr(const char *str, const char *sub, const char *replace);
	void *mx_memset(void *b, int c, size_t len);
	void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
	void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
	int mx_memcmp(const void *s1, const void *s2, size_t n);
	void *mx_memrchr(const void *s, int c, size_t n);
	void *mx_memchr(const void *s, int c, size_t n);
	void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
	void *mx_memmove(void *dst, const void *src, size_t len);
	void *mx_realloc(void *ptr, size_t size);
	t_list *mx_create_node(void *data);
	void mx_push_front(t_list **list, void *data);
	void mx_push_back(t_list **list, void *data);
	void mx_pop_back(t_list **head);
	void mx_pop_front(t_list **head);
	int mx_list_size(t_list *list);
	t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));

	//--------------------------------------------------------------------------------------------------
#endif
