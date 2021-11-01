/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:05:29 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/01 11:05:31 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

int				ft_atoi(const char *str);
int				ft_isalnum(int n);
int				ft_isalpha(int n);
int				ft_isascii(int n);
int				ft_isblank(int n);
int				ft_iscntrl(int n);
int				ft_isdigit(int n);
int				ft_isgraph(int n);
int				ft_islower(int n);
int				ft_isprint(int n);
int				ft_ispunct(int n);
int				ft_isspace(int n);
int				ft_isupper(int n);
int				ft_isxdigit(int n);
int				ft_tolower(int n);
int				ft_toupper(int n);
void			ft_bzero(void *dest, size_t len);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *dest, int c, size_t len);
char			*ft_strcat(char *s, const char *append);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t len);
void			*ft_memchr(const void *b, int c, size_t len);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen_2(char **s);
char			*ft_strncat(char *s, const char *append, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
char			*ft_strncpy(char *dst, const char *src, size_t len);
int				ft_strnrcmp(const char *s1, const char *s2, size_t len);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*---------------------------The Bonus part--------------------------------*/
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
