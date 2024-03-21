/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:11:15 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/07 13:15:16 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a < size - 1)
	{
		if (tab [a] > tab [a + 1])
		{
			temp = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = temp;
			a = 0;
		}
		else
		{
			a++;
		}
	}
}
/*
#include <stdio.h>
int main(void)
{
	int array[] = {2,6,8,1,7,2,8,0};
   	ft_sort_int_tab(array,8);
	for (int i =0;i<8;i++)
	{
		printf("%d ",array[i]);
	}	
	return 0;
}
*/
