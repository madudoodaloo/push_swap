/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:14:49 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:14:50 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate(t_stack **lst, int i)
{
	t_stack	*last;
	t_stack	*temp;

	last = ft_lstgetlast(*lst);
	last->next = *lst;
	temp = *lst;
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	*lst = last;
	if (i == 0)
		write(1, "rra\n", 4);
	else if (i == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, int i)
{
	rev_rotate(a, 2);
	rev_rotate(b, 2);
	if (i == 2)
		write(1, "rrr\n", 4);
}
