/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtuncel <mtuncel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:23:35 by mtuncel           #+#    #+#             */
/*   Updated: 2023/08/31 13:24:05 by mtuncel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	say;

	say = 122;
	while (say >= 97)
	{
		write(1, &say, 1);
		say--;
	}
}
