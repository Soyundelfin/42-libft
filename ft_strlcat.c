/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:44:00 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 13:44:00 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (len - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
 int main ()
{
    char s1[50] = "This is s1. ";
    char s2[50] = "This is s2.";
    ft_strlcat(s1, s2, 3);
    printf("Final string : %s\n", s1);
    return(0);
 }
*/