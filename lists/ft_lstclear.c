/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:15:16 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/07 20:15:17 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*save;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		save = (*lst)->next;
		free(*lst);
		*lst = save;
	}
	free(save);
}
