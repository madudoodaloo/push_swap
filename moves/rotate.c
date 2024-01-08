/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:14:44 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:14:45 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **lst, int i)
{
	t_stack	*temp;
	t_stack	*cursor;

	cursor = ft_lstgetlast(*lst);
	cursor->next = *lst;
	cursor = *lst;
	temp = (*lst)->next;
	cursor->next = NULL;
	*lst = temp;
	if (i == 0)
		write(1, "ra\n", 3);
	else if (i == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 2);
	rotate(b, 2);
	write(1, "rr\n", 3);
}
