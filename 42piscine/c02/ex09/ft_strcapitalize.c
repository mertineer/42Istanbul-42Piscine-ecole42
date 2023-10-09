/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:01:10 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/05 18:01:11 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	str = ft_lowstr(str);
	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (check == 0)
			{
				str[i] -= 32;
				check = 1;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			check = 1;
		else
			check = 0;
		i++;
	}
	return (str);
}
