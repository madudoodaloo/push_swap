/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duckiemadu <duckiemadu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:15:49 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:21:55 by duckiemadu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	alg3(t_stack **a)
{
	int		big;
	t_stack	*stack;

	stack = *a;
	big = stack->content;
	while (stack)
	{
		if (stack->content > big)
			big = stack->content;
		stack = stack->next;
	}
	if ((*a)->content == big)
		rotate(a, 0);
	else if ((*a)->next->content == big)
		rev_rotate(a, 0);
	if ((*a)->content > (*a)->next->content)
		swap(a, 0);
}
