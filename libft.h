/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:36:57 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/11/20 09:51:44 by ael-hadd         ###   ########.fr       */
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
}	t_list;

//Part 1 - Libc Functions
int		ft_isalpha(int c); //done
int		ft_isdigit(int c); //done
int		ft_isalnum(int c); //done
int		ft_isascii(int c); //done
int		ft_isprint(int c); //done
size_t	ft_strlen(const char *s); //done
void	*ft_memset(void *b, int c, size_t len); //done
void	ft_bzero(void *s, size_t n); //done
void	*ft_memcpy(void *dst, const void *src, size_t n); //done
void	*ft_memmove(void *dst, const void *sr, size_t len); //done
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); //done
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); //done
int		ft_toupper(int c); //done
int		ft_tolower(int c); //done
char	*ft_strchr(const char *s, int c); //done
char	*ft_strrchr(const char *s, int c); //done
int		ft_strncmp(const char *s1, const char *s2, size_t n); //done
void	*ft_memchr(const void *s, int c, size_t n); //done
int		ft_memcmp(const void *s1, const void *s2, size_t n); //done
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);//done
int		ft_atoi(const char *str); //done

void	*ft_calloc(size_t count, size_t size); //done
char	*ft_strdup(const char *s1); //done

//Part 2 - Additional Fanctions
char	*ft_substr(char const *s, unsigned int start, size_t len); //done
char	*ft_strjoin(char const *s1, char const *s2); //done
char	*ft_strtrim(char const *s1, char const *set); //done
char	**ft_split(char const *s, char c); //done
char	*ft_itoa(int n); //done
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //done
void	ft_striteri(char *s, void (*f)(unsigned int, char*)); //done
void	ft_putchar_fd(char c, int fd); //done
void	ft_putstr_fd(char *s, int fd); //done
void	ft_putendl_fd(char *s, int fd); //done
void	ft_putnbr_fd(int n, int fd); //done

//Bonus Part
t_list	*ft_lstnew(void *content); //done
void	ft_lstadd_front(t_list **lst, t_list *new); //done
int		ft_lstsize(t_list *lst); //done
t_list	*ft_lstlast(t_list *lst); //done
void	ft_lstadd_back(t_list **lst, t_list *new); //done
void	ft_lstdelone(t_list *lst, void (*del) (void *)); //done
void	ft_lstclear(t_list **lst, void (*del) (void *)); //done
void	ft_lstiter(t_list *lst, void (*f)(void *)); //done
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
