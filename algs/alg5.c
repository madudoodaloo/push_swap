/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:15:42 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:15:43 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getsmallest(t_stack **a)
{
	int		position;
	t_stack	*cursor;
	t_stack	*smallest;

	cursor = *a;
	smallest = *a;
	position = 0;
	while (cursor)
	{
		if (cursor->content < smallest->content)
			smallest = cursor;
		cursor = cursor->next;
	}
	cursor = *a;
	while (cursor != smallest)
	{
		position++;
		cursor = cursor->next;
	}
	return (position);
}

void	pushsmallest(t_stack **a, t_stack **b, int position, int flag)
{
	if (position > 2)
	{
		if (flag == 1)
			position = 4 - position;
		else
			position = 5 - position;
		while (position)
		{
			rev_rotate(a, 0);
			position--;
		}
	}
	else
	{
		while (position)
		{
			rotate(a, 0);
			position--;
		}
	}
	push(a, b, 1);
}

void	alg5(t_stack **a, t_stack **b)
{
	t_stack	*cursor;
	int		position;

	cursor = *a;
	if (ft_lstsize(cursor) == 5)
	{
		position = getsmallest(&cursor);
		pushsmallest(a, b, position, 0);
		cursor = *a;
	}
	position = getsmallest(&cursor);
	pushsmallest(a, b, position, 1);
	if (!(is_sorted(a)))
		alg3(a);
	while (*b)
		push(b, a, 0);
}

/* checker to see if it works */
/* void	print_list(t_stack **stack)
{
	t_stack	*current;

	if (!*stack)
		return ;
	current = *stack;
	while (current != NULL)
	{
		ft_printf("%d\n", current->content);
		current = current->next;
	}
}
 */