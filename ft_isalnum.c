/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/
#include "libft.h"

int        ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
** int main()
** {
** 	char c, result;
**
**     c = '*';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**  	return 0;
** }
*/