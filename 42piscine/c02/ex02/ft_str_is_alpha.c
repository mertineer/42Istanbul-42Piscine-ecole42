/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:17:03 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/04 23:17:05 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x < 65)
			return (0);
		else if (x > 90 && x < 97)
			return (0);
		else if (x > 122)
			return (0);
		i++;
	}
	return (1);
}
