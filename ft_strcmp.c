/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:54:32 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 11:39:16 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	p;

	p = 0;
	while (s1[p] == s2[p] && s1[p] != '\0')
		p++;
	return (s1[p] - s2[p]);
}

/*
 * int main(int ac, char **av) {

  printf("%i\n", ft_strcmp(av[1], av[2]));
  return 0;
}
*/