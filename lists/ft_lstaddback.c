/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:15:28 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:15:29 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstaddback(t_stack **lst, t_stack *newnode)
{
	t_stack	*lastnode;

	if (!lst | !newnode)
		return ;
	if (!*lst)
	{
		*lst = newnode;
	}
	else
	{
		lastnode = ft_lstgetlast(*lst);
		lastnode->next = newnode;
	}
}
