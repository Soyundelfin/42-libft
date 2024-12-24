/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:03:16 by mroman-j          #+#    #+#             */
/*   Updated: 2024/01/02 16:39:35 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	final;

	p = 0;
	final = 0;
	while (src[final])
		final++;
	if (size < 1)
		return (final);
	while (src[p] && p < size - 1)
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (final);
}