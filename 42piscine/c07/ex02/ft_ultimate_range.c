/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:23 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/17 17:22:24 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*pt;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	pt = malloc(size * sizeof(int));
	if (!pt)
	{
		*range = 0;
		return (-1);
	}
	*range = pt;
	i = 0;
	while (min < max)
	{
		pt[i] = min;
		min++;
		i++;
	}
	return (size);
}
