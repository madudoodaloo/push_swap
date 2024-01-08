/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:14:34 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:14:36 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **lst, int i)
{
	t_stack	*temp;
	t_stack	*top;

	top = *lst;
	temp = top->next->next;
	top = top->next;
	top->next = *lst;
	*lst = top;
	top = top->next;
	top->next = temp;
	if (i == 0)
		write(1, "sa\n", 3);
	else if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b, int i)
{
	swap(a, 1);
	swap(b, 2);
	if (i == 3)
		write(1, "ss\n", 3);
}
