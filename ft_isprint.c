/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:39:56 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/24 20:01:06 by mroman-j         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int isprint(int c) 
{
    return (c >= 32 && c <= 126);
}

/*
int main 
{
    char c, result;

    c = '7';
    result = ft_isprint(c);
    printf("The result is %d\n", result);

    c = 'g';
    result = ft_isprint(c);
    printf("The result is %d\n", result);

    c = '+';
    result = ft_isprint(c);
    printf("The result is %d\n", result);

    return 0;
}
*/