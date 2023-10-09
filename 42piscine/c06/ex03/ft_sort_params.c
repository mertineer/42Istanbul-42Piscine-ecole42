/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:05:16 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/13 17:05:17 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_comp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] == str2[i])
			i++;
		else
			break ;
	}
	return (str1[i] - str2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort(char **av, int size)
{
	int	j;
	int	check;
	int	i;

	j = 0;
	while (j < 1)
	{
		i = 1;
		check = 0;
		while (i < size - 1)
		{
			if (ft_comp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
				check++;
			}
			i++;
		}
		if (check == 0)
			j = 2;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort(av, ac);
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
