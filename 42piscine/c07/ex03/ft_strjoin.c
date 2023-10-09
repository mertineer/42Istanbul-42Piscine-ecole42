/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:26 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/18 19:09:02 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	sizer(int *allsize, char **strs, int size, char *sep)
{
	int	i;

	i = 0;
	*allsize = 0;
	while (i < size)
	{
		*allsize += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		*allsize += ft_strlen(sep);
		i++;
	}
}

void	comma(char *sep, char *str, int *i)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		str[*i] = sep[j];
		j++;
		*i = *i + 1;
	}
}

void	adder(char *s, char **strs, int size, char *sep)
{
	int	i;
	int	x;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		x = 0;
		while (x < ft_strlen(strs[j]))
		{
			s[i] = strs[j][x];
			x++;
			i++;
		}
		if (j != size - 1)
			comma(sep, s, &i);
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		allsize;

	if (size == 0)
		return (0);
	sizer(&allsize, strs, size, sep);
	s = malloc(allsize * sizeof(char));
	adder(s, strs, size, sep);
	return (s);
}
