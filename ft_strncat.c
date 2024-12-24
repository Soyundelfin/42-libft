/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	p1;
	unsigned int	p2;

	p1 = 0;
	p2 = 0;
	while (dest[p1] != '\0')
		p1++;
	while (src[p2] != '\0' && nb > 0)
	{
		dest[p1] = src[p2];
		p1++;
		p2++;
		nb--;
	}
	dest[p1] = '\0';
	return (dest);
}

/*
int main() 
{
  char str1[] = "Hola";
  char str2[] = " mundo";

  strncat(str1, str2, 2);

  printf("%s\n", str1);

  return 0;
}*/