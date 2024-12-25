/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:03:54 by mroman-j          #+#    #+#             */
/*   Updated: 2024/12/25 16:52:00 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	p1;
	size_t	p2;

	p1 = 0;
	if (*to_find == '\0') // Si la subcadena está vacía, retorna el inicio de la cadena principal.
		return (str);
	while (str[p1] != '\0' && p1 < len) // Itera en la cadena principal dentro del límite `len`.
	{
		p2 = 0;
		// Compara los caracteres de ambas cadenas mientras estén dentro del rango `len`.
		while (str[p1 + p2] == to_find[p2] && (p1 + p2) < len)
		{
			p2++;
			// Si hemos recorrido toda la subcadena `to_find`, la encontramos.
			if (to_find[p2] == '\0')
				return (&str[p1]);
		}
		p1++;
	}
	return (0); // Retorna NULL si no se encuentra la subcadena.
}


/*
int main() {
    // Casos de prueba
    char str1[] = "Hola Mundo";
    char to_find1[] = "Mundo";

    char str2[] = "Hola Mundo";
    char to_find2[] = "Hola";

    char str3[] = "Hola Mundo";
    char to_find3[] = "";

    char str4[] = "Hola Mundo";
    char to_find4[] = "Adios";

    char str5[] = "Hola Mundo";
    char to_find5[] = "Mund";

    // Ejemplo 1: Subcadena encontrada dentro del límite
    char *result = ft_strnstr(str1, to_find1, 10);
    printf("Ejemplo 1: %s\n", result ? result : "No encontrada");

    // Ejemplo 2: Subcadena encontrada en el inicio
    result = ft_strnstr(str2, to_find2, 4);
    printf("Ejemplo 2: %s\n", result ? result : "No encontrada");

    // Ejemplo 3: Subcadena vacía (debe retornar str)
    result = ft_strnstr(str3, to_find3, 10);
    printf("Ejemplo 3: %s\n", result ? result : "No encontrada");

    // Ejemplo 4: Subcadena no encontrada
    result = ft_strnstr(str4, to_find4, 10);
    printf("Ejemplo 4: %s\n", result ? result : "No encontrada");

    // Ejemplo 5: Subcadena parcial fuera del límite
    result = ft_strnstr(str5, to_find5, 3);
    printf("Ejemplo 5: %s\n", result ? result : "No encontrada");

    return 0;
}
*/