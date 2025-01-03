/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/04/03 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */                                                                            */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/* funciones obligatorias libreria */

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src,
						int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *s); /*DONE*/
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src); /*DONE*/
unsigned int		ft_strlcpy(char *dst, const char *src, unsigned int size); /*DONE*/
char				*ft_strncpy(char *dest, const char *src, size_t len); /*DONE*/
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n); /*DONE*/
size_t				ft_strlcat(char *dst, const char *src, size_t size); /*ESTUDIAR porque no funciona con unsigned int*/
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(char *str, char *to_find); /*DONE*/
char				*ft_strnstr(char *str, char *to_find, size_t len); /*DONE*/
int					ft_strcmp(char *s1, char *s2); /*DONE*/
int					ft_strncmp(char *s1, char *s2, unsigned int n); /*DONE*/ 

char				*ft_itoa(int nbr);
int					ft_atoi(const char *str);

int					ft_isalpha(int c); /*DONE*/
int					ft_isdigit(int c); /*DONE*/
int					ft_isalnum(int c); /*DONE*/
int					ft_isascii(int c); /*DONE*/
int					ft_isprint(int c); /*DONE*/
int					ft_toupper(int c);
int					ft_tolower(int c);

#endif
