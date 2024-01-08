/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg100.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duckiemadu <duckiemadu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:15:38 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:22:06 by duckiemadu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	putinb(t_stack **a, t_stack **b, int size)
{
	int	chunk;
	int	counterb;

	chunk = 30;
	counterb = 0;
	while (*a)
	{
		if ((*a)->index < chunk)
		{
			push(a, b, 1);
			counterb++;
		}
		else if (counterb == chunk)
		{
			if (size > 100)
			{
				chunk += 30;
			}
			else
				chunk += 15;
		}
		else
			pushtotop(a, indexchecker(a, (*a)->index), 0);
	}
}

int	putina(t_stack **a, t_stack **b, int *big, int index)
{
	if ((*a) && (*a)->next && (*a)->content > (*a)->next->content)
	{
		swap(a, 0);
		(*big)--;
		index = indexchecker(b, *big);
	}
	else if ((indexchecker(b, ((*big) - 1)) == 0))
	{
		push(b, a, 0);
		index = indexchecker(b, (*big));
	}
	else if (index == 2 && (indexchecker(b, ((*big) - 1)) == 0))
	{
		push(b, a, 0);
		(*big)--;
		rotate(b, 1);
		push(b, a, 0);
		(*big)--;
		swap(a, 0);
		index = indexchecker(b, (*big));
	}
	index = putina2(a, b, big, index);
	return (index);
}

int	putina2(t_stack **a, t_stack **b, int *big, int index)
{
	if (index == 1 && (indexchecker(b, (*big) - 1)) == 0)
	{
		swap(b, 1);
		index = indexchecker(b, (*big));
	}
	else if (indexchecker(b, (*big)) == 0)
	{
		push(b, a, 0);
		(*big)--;
		index = indexchecker(b, (*big));
	}
	else
	{
		pushtotop(b, index, 1);
		index = indexchecker(b, (*big));
	}
	return (index);
}

void	alg100(t_stack **a, t_stack **b)
{
	int	index;
	int	big;

	putinb(a, b, ft_lstsize(*a));
	big = getbiggestindex(b);
	index = indexchecker(b, big);
	while ((*b) && index == indexchecker(b, big))
		index = putina(a, b, &big, index);
	if ((*b) == NULL && (*a)->content > (*a)->next->content)
		swap(a, 0);
}
