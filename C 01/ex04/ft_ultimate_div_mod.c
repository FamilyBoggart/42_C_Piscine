/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:11:23 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/07 20:13:22 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;
	*a = aux1 / aux2 ;
	*b = aux1 % aux2;
}
/*
#include <stdio.h>
int main(void)
{
	int c= 40;
	int d = 10;
	printf("NUmeros originales: %d y %d\n ",c,d);
	ft_ultimate_div_mod(&c,&d);
	printf("Division: %d, Resto: %d",c,d);

}
*/
