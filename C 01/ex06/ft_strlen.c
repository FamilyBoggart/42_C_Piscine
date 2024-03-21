/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:06:55 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/06 16:26:17 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	posicion;
	int	contador;

	contador = 0;
	posicion = 0;
	while (str[posicion++] != '\0')
	{
		contador++;
	}
	return (contador);
}
/*
#include <stdio.h>

int main(void)
{
	char *saludo = "Hola Amiguitos mios";
	int numero =ft_strlen(saludo);
	printf("Numero de caracteres: %d",numero);
	return 0;
}
*/
