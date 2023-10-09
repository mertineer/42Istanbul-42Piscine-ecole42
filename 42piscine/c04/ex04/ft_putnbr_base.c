/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:31:02 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/12 18:22:20 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	ft_err(char *str)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = ft_strlen(str);
	if (size <= 1 || str[i] == '\0')
		return (-1);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] == 127)
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	int	i;

	i = ft_strlen(base);
	check = ft_err(base);
	if (check == 1)
	{
		if (nbr == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else if (nbr <= i && nbr >= 0)
			ft_putchar(base[nbr]);
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else
		{
			ft_putnbr_base(nbr / i, base);
			ft_putnbr_base(nbr % i, base);
		}
	}
}
