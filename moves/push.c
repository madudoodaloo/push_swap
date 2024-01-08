/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:14:54 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:14:55 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **src, t_stack **dest, int i)
{
	t_stack	*temp;
	t_stack	*top_src;
	t_stack	*top_dest;

	top_src = *src;
	if (!*dest)
	{
		*dest = *src;
		top_dest = *dest;
		*src = top_src->next;
		top_dest->next = NULL;
	}
	else
	{
		temp = *dest;
		*dest = *src;
		top_dest = *dest;
		*src = top_src->next;
		top_dest->next = temp;
	}
	if (i == 0)
		write(1, "pa\n", 3);
	else if (i == 1)
		write(1, "pb\n", 3);
}
