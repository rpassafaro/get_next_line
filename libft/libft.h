/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:28:16 by rpassafa          #+#    #+#             */
/*   Updated: 2016/10/04 16:55:15 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	*ft_memalloc(size_t size);
void	*ft_memset(void *dest, int value, size_t bytes);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(char *c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *string, int character);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t max);
int		ft_strncmp(const char *s1, const char *s2, size_t length);
char	*ft_strncpy(char const *dst, char *src, size_t max);
char	*ft_strnstr(const char *s1, const char *s2, size_t max);
char	*ft_strrchr(const char *string, int character);
char	*ft_strstr(const char *big, const char *little);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char*s, void(*f)(char*));
void	ft_striteri(char*s, void(*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char(*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_itoa(int n);

#endif
