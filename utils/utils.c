/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:13:56 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 23:39:33 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack **stack_a)
{
	t_stack	*cursor;

	cursor = *stack_a;
	while (cursor->next)
	{
		if (cursor->content > cursor->next->content)
			return (0);
		cursor = cursor->next;
	}
	return (1);
}

void	get_index(t_stack **a)
{
	t_stack	*temp;
	t_stack	*cursor;

	cursor = *a;
	while (cursor)
	{
		cursor->index = 0;
		temp = *a;
		while (temp)
		{
			if (cursor != temp && cursor->content > temp->content)
				cursor->index++;
			temp = temp->next;
		}
		cursor = cursor->next;
	}
}

void	pushtotop(t_stack **stack, int index, int whichstack)
{
	if (index == -1)
		return ;
	if (index < (ft_lstsize(*stack) / 2))
		rotate(stack, whichstack);
	else
		rev_rotate(stack, whichstack);
}

int	getbiggestindex(t_stack **stack)
{
	t_stack	*cursor;
	int		big;

	cursor = *stack;
	big = cursor->index;
	while (cursor)
	{
		if (cursor->index > big)
			big = cursor->index;
		cursor = cursor->next;
	}
	return (big);
}

int	indexchecker(t_stack **stack, int i)
{
	t_stack	*cursor;
	int		position;
	int		flag;

	position = 0;
	flag = -1;
	cursor = *stack;
	while (cursor)
	{
		if (cursor->index == i)
		{
			flag = 0;
			break ;
		}
		position++;
		cursor = cursor->next;
	}
	if (flag == -1)
		return (-1);
	return (position);
}
