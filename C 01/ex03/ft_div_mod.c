/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:08:03 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/07 15:46:38 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 9;
	int b = 2;
	int div;
	int mod;
	ft_div_mod(a,b,&div,&mod);
	printf("Division: %d , Resto: %d ",div,mod);
}
*/
