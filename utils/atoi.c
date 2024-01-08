/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:14:26 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/08 01:19:18 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long int	super_atoi(char *av)
{
	size_t	i;
	size_t	nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (av[i] == 43 || av[i] == 45)
	{
		if (av[i] == 45)
			sign *= -1;
		i++;
	}
	while (av[i] < 58 && av[i] > 47)
	{
		nbr = (nbr * 10) + (av[i] - 48);
		i++;
	}
	return (nbr * sign);
}
