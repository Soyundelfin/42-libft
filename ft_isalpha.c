/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int		ft_isalpha(int letra)
{
	if ((letra >= 65 && letra <= 90) || (letra >= 97 & letra <= 122))
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
**  	result = ft_isalpha(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**  	result = ft_isalpha(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**  	result = ft_isalpha(c);
**     printf("The result is %d\n", result);
**
**  	return 0;
** }
*/
