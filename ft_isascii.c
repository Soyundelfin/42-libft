/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/
#include <libc.h>
int isascii(int c) 
{
    return (c >= 0 && c <= 127);
}

/*
int main()
{
	char c, result;

	c = '7';
	result = ft_isascii(c);
	printf("The result is %d\n", result);

	c = 'g';
	result = ft_isascii(c);
	printf("The result is %d\n", result);

	c = '+';
	result = ft_isascii(c);
	printf("The result is %d\n", result);

	return 0;
}
*/