/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:42:01 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/08 02:24:27 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_args(char **nbrs)
{
	int	i;

	i = 0;
	if (nbrs)
	{
		while (nbrs[i])
			free(nbrs[i++]);
		free(nbrs);
	}
}

int	sign(char *nbrs)
{
	int	i;
	int	sign;

	i = -1;
	sign = 0;
	while (nbrs[++i])
	{
		if (nbrs[i] == 43 || nbrs[i] == 45)
			sign += 1;
	}
	if (sign > 1)
		return (1);
	return (0);
}

int	check_num(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	if (str[0] == '-' && (str[1] >= '0' && str[1] <= '9'))
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	is_valid(char **av, t_stack **stack)
{
	int			i;
	int			j;
	long int	tmp;
	char		**nbrs;

	i = 0;
	while (av[++i])
	{
		nbrs = ft_split(av[i], 32);
		j = 0;
		while (nbrs[j])
		{
			tmp = super_atoi(nbrs[j]);
			if (check_num(nbrs[j]) || sign(nbrs[j]) || (tmp < INT_MIN
					|| tmp > INT_MAX) || (ft_strlen(nbrs[j]) > 11))
			{
				free_args(nbrs);
				return (0);
			}
			ft_lstaddback(stack, ft_lstnew(super_atoi(nbrs[j])));
			j++;
		}
		free_args(nbrs);
	}
	return (1);
}

int	not_dup(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*comp;

	temp = *stack;
	while (temp)
	{
		comp = *stack;
		while (comp)
		{
			if (temp->next != comp->next && temp->content == comp->content)
				return (0);
			comp = comp->next;
		}
		temp = temp->next;
	}
	return (1);
}
