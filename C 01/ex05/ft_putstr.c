/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:18:49 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/07 19:28:51 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		write(1, & str[contador], 1);
		contador++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char *saludo ="Hola Mundo";
	ft_putstr(saludo);
//	printf("%s",saludo);
}
*/
