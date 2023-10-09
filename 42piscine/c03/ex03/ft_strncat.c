/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:50:29 by mtuncel           #+#    #+#             */
/*   Updated: 2023/09/09 23:50:30 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strnlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = strnlen(dest);
	j = 0;
	while (j < nb)
	{
		if (src[j] != '\0')
			dest[i] = src[j];
		else
			break ;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
