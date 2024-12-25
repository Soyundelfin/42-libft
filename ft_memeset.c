/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memeset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman <mroman-j@student.42barcel>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 10:00:00 by mroman            #+#    #+#             */
/*   Updated: 2024/12/25 10:00:00 by mroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void    *ft_memset(void *ptr, int value, size_t len) // ptr puntero a la memoria que se va a llenar, value valor que se va a poner en la memoria, len tamaño de la memoria
{
    unsigned char *p = ptr; //convierte el puntero a un puntero de tipo unsigned char
    while (len--) //inicia un ciclo que se repite hasta que len sea 0
    {
        *p++ = (unsigned char)value; // Asigna el valor de value (convertido a unsigned char) al byte apuntado por p. Luego incrementa p en 1.
    }
    return ptr;
}

/*
int main() {
    // Caso 1: Llenar un array de caracteres con un valor específico
    char buffer1[10];
    my_memset(buffer1, 'A', sizeof(buffer1));

    printf("Caso 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer1[i]); // Esperado: A A A A A A A A A A
    }
    printf("\n");

    // Caso 2: Llenar un array de enteros con ceros
    int buffer2[5];
    my_memset(buffer2, 0, sizeof(buffer2));

    printf("Caso 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", buffer2[i]); // Esperado: 0 0 0 0 0
    }
    printf("\n");

    // Caso 3: Llenar parcialmente un array de caracteres
    char buffer3[10] = "ABCDEFGHIJ";
    my_memset(buffer3, 'X', 5); // Cambiar solo los primeros 5 caracteres

    printf("Caso 3: %s\n", buffer3); // Esperado: XXXXXFGHIJ

    // Caso 4: Trabajar con punteros genéricos
    char buffer4[5];
    void *ptr = my_memset(buffer4, 'Z', 5);

    printf("Caso 4: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", ((char *)ptr)[i]); // Esperado: Z Z Z Z Z
    }
    printf("\n");

    return 0;
}
*/