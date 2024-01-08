/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:13:39 by msilva-c          #+#    #+#             */
/*   Updated: 2024/01/08 18:45:51 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	struct s_stack	*next;
	int				content;
	int				index;
}					t_stack;

/* alg 3 */
void				alg3(t_stack **a);

/* alg 5 */
int					getsmallest(t_stack **a);
void				pushsmallest(t_stack **a, t_stack **b, int position,
						int flag);
void				alg5(t_stack **a, t_stack **b);

/* alg 100 */
void				putinb(t_stack **a, t_stack **b, int size);
int					putina(t_stack **a, t_stack **b, int *big, int index);
int					putina2(t_stack **a, t_stack **b, int *big, int index);
void				alg100(t_stack **a, t_stack **b);

/* alg 500 */
int					pos_checker(t_stack **b, int big, int size);
void				sort_a(t_stack **a, t_stack **b);
void				alg500(t_stack **a, t_stack **b);

/* checkers */
int					is_valid(char **av, t_stack **stack);
int					not_dup(t_stack **stack);
int					free_args(char **nbrs);
int					sign(char *nbrs);
int					check_num(char *str);

/* list functions */
void				ft_lstaddback(t_stack **lst, t_stack *newnode);
int					ft_lstaddfront(t_stack **lst, t_stack *newnode);
void				ft_lstclear(t_stack **lst);
t_stack				*ft_lstgetlast(t_stack *lst);
t_stack				*ft_lstnew(int content);
int					ft_lstsize(t_stack *lst);

/* moves */
void				push(t_stack **src, t_stack **dest, int i);
void				swap(t_stack **lst, int i);
void				ss(t_stack **a, t_stack **b, int i);
void				rev_rotate(t_stack **lst, int i);
void				rrr(t_stack **a, t_stack **b, int i);
void				rotate(t_stack **lst, int i);
void				rr(t_stack **a, t_stack **b);

/* utils */
int					is_sorted(t_stack **stack_a);
void				get_index(t_stack **a);
void				pushtotop(t_stack **stack, int index, int whichstack);
int					getbiggestindex(t_stack **stack);
int					indexchecker(t_stack **stack, int i);

/* split */
char				**ft_split(const char *str, char c);
char				**get_words(char **arr, const char *str, char c, int len);
int					get_len(const char *str, char c);

/* libft */
int					ft_strlen(const char *str);
int					ft_strlcpy(char *dst, const char *src, int len);
char				*ft_strdup(const char *str);
char				*ft_substr(const char *str, int start, int len);

/* atoi */
long int			super_atoi(char *av);

#endif
