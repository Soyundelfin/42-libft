/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int		ft_isdigit(int numero)
{
	if ((numero >= 0 && numero <= 9))
		return (1);
	else
		return (0);
}

/*
** int main()
** {
**  	char c, result;
**
**     c = '7';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**   	return 0;
** }
*/