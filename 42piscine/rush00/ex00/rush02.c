/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:58:59 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/03 15:43:54 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 0;
	while (b++ < y)
	{
		a = 0;
		while (a++ < x)
		{
			if (a == 1 | a == x)
				if (b == 1)
					ft_putchar('A');
			else if (b == y)
				ft_putchar('C');
			else
				ft_putchar('B');
			else
				if (b == 1 | b == y) 
					ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
