#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

int     ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void    *ft_calloc (size_t count, size_t size);
int     ft_isalnum(int arg);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *str, const void *str2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int     ft_strlen(char *str);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *small, size_t len);
char    *ft_strrchr(const char *s, int c);
int     ft_tolower(int ch);
int     ft_toupper(int ch);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(int size, char **strs, char *sep);

#endif