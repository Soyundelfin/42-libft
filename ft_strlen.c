/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman <mroman-j@student.42barcel>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:00:00 by mroman            #+#    #+#             */
/*   Updated: 2024/12/24 10:00:00 by mroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
    size_t	len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

/*
int main(void)
{
    char *str = "Hello, World!";
    printf("Length of string \"%s\" is %zu\n", str, ft_strlen(str));
    return (0);
}
*/