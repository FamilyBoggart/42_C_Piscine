/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:26:56 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/07 20:10:43 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		end--;
		start++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int size = 6;
	int array [] ={10,11,12,13,14,15};
	ft_rev_int_tab(array,size);
	int i=0;
	while(i < size)
	{
		printf( "%d ",array[i]);
	   	i++;	
	}
	return 0;
}
*/
