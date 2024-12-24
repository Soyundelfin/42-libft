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
#include "libft.h"
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	p1;
    unsigned int	p2;
    unsigned int	dlen;
    unsigned int	slen;

    p1 = 0;
    p2 = 0;
    while (dest[p1] != '\0')
        p1++;
    dlen = p1;
    while (src[p2] != '\0')
        p2++;
    slen = p2;
    if (size == 0 || size <= dlen)
        return (slen + size);
    p2 = 0;
    while (src[p2] != '\0' && dlen + p2 < size - 1)
    {
        dest[dlen + p2] = src[p2];
        p2++;
    }
    dest[dlen + p2] = '\0';
    return (dlen + slen);
}
/*
int	main()
{
	write(1, ft_strlcat("hola", " mundo", 25), 25);
}
---------------------------------
int main()
{
  char str1[] = "Hola";
  char str2[] = " mundo";

  ft_strlcat(str1, str2, 20);

  printf("%s\n", str1);

  return (0);
}*/