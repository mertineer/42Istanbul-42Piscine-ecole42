/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:57:10 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/04 16:57:22 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	z;
	int	len;

	len = size / 2;
	y = 0;
	while (size - 1 >= len)
	{
		x = tab[size - 1];
		z = tab[y];
		tab[y] = x;
		tab[size - 1] = z;
		size--;
		y++;
	}
}
