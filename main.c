/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:13:50 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/08 01:47:12 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_alg(t_stack **a, t_stack **b, int ac)
{
	if (is_sorted(a))
		return ;
	else if (ac == 3)
		swap(a, 0);
	else if (ac == 4)
		alg3(a);
	else if (ac == 5 || ac == 6)
		alg5(a, b);
	else if (ac > 6 && ac < 501)
		alg100(a, b);
	else if (ac >= 501)
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
		if (is_valid(av, &a) == 1 && is_dup(&a) == 1)
		{
			printLinkedList(a);
			get_index(&a);
			sort_alg(&a, &b, ac);
			printf("is here\n");
		}
		ft_lstclear(&a);
		ft_lstclear(&b);
	}
	else
		return (1);
}
