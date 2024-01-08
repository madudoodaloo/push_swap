/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:13:50 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/08 03:04:59 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_alg(t_stack **a, t_stack **b, int size)
{
	if (is_sorted(a))
		return ;
	else if (size == 2)
		swap(a, 0);
	else if (size == 3)
		alg3(a);
	else if (size == 4 || size == 5)
		alg5(a, b);
	else if (size > 5 && size < 500)
		alg100(a, b);
	else if (size >= 500)
		alg500(a, b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac > 1)
	{
		a = NULL;
		b = NULL;
		if (!is_valid(av, &a) || !not_dup(&a))
			write(2, "Error\n", 6);
		else
		{
			get_index(&a);
			sort_alg(&a, &b, ft_lstsize(a));
		}
		ft_lstclear(&a);
		ft_lstclear(&b);
	}
	return (0);
}
