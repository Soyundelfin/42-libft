/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:03:54 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 19:52:00 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	p1;
	unsigned int	p2;

	p1 = 0;
	if (*to_find == '\0')
		return (str);
	while (str[p1] != '\0')
	{
		p1++;
		p2 = 0;
		while (str[p1] == to_find[p2])
		{
			p1++;
			p2++;
			if (to_find[p2] == '\0')
			{
				return (&str[p1 - p2]);
			}
		}
		p1 = p1 - p2;
	}
	return (0);
}
/*
int	main (int ac, char **av)
{
	write (1, ft_strstr(av[1], av[2]), 1);
}


int	main (int ac, char *av[])
{
	printf("%s\n", ft_strstr(av[1], av[2]));
	return (0);
}*/