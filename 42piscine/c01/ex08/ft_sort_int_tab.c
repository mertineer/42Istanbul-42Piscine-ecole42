/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:57:37 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/04 16:57:43 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	check;
	int	x;

	j = 0;
	while (j < 1)
	{
		i = 0;
		check = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				x = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = x;
				check++;
			}
			i++;
		}
		if (check == 0)
			j = 2;
	}
}
