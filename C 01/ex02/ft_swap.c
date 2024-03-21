/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:58:03 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/07 15:45:30 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
#include <stdio.h>

int main(void)
{
	int a=4;
	int b=-19;

	ft_swap(&a,&b);
	printf("%d",a);
	printf("%d",b);
}
*/
