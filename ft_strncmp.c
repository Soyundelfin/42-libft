/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:16:41 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 17:31:48 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	p;

	p = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[p] == s2[p] && s1[p] != '\0' && p < n -1)
	{
		p++;
	}
	return (s1[p] - s2[p]);
}

/*
int	main(void)
{
	char s1[] = "Holita";
 	char s2[] = "olita";
 	unsigned int n = 20;
 	int result;
 	result = ft_strncmp(s1, s2, n);
 	printf("%d", result);
 	return (0);
}*/