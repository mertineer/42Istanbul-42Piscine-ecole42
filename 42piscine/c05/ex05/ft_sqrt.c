/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:33:16 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/12 16:33:17 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	sqrt;

	if (nb <= 0)
		return (0);
	sqrt = 1;
	while (sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		else if (sqrt * sqrt > nb)
			break ;
		sqrt++;
	}
	return (0);
}
