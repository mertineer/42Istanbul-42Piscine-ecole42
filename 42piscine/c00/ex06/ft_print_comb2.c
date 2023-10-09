/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:31:33 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/02 12:13:51 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c1;
	int	c2;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			if (a != b)
				c1 = (a / 10) + 48;
			c2 = (a % 10) + 48;
			write(1, &c1, 1);
			write(1, &c2, 1);
			write(1, " ", 1);
			c1 = (b / 10) + 48;
			c2 = (b % 10) + 48;
			write(1, &c1, 1);
			write(1, &c2, 1);
			if (a != 98)
				write(1, ", ", 2);
		}
	}
}

int main(void)
{
	ft_print_comb2();
}