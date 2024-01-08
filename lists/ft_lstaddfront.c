/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:15:22 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:15:23 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstaddfront(t_stack **lst, t_stack *newnode)
{
	if (!lst | !newnode)
		return (0);
	newnode->next = *lst;
	*lst = newnode;
	return (1);
}
