/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:17:46 by efaustin          #+#    #+#             */
/*   Updated: 2024/10/01 14:17:47 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

t_stack		*get_stack_before_bottom(t_stack *stack);
t_stack		*fill_stack_values(int ac, char **av);
t_stack		*get_stack_bottom(t_stack *stack);
t_stack		*stack_new(int value);

int			get_lowest_index_position(t_stack **stack);
int			nbstr_cmp(const char *s1, const char *s2);
int			get_stack_size(t_stack	*stack);
int			is_correct_input(char **av, int ac);
int			is_sorted(t_stack *stack);
long int	ft_atoi(const char *str);
int			is_digit(char c);
int			is_sign(char c);
int			nb_abs(int nb);

void		get_target_position(t_stack **stack_a, t_stack **stack_b);
void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void		do_cheapest_move(t_stack **stack_a, t_stack **stack_b);
void		exit_error(t_stack **stack_a, t_stack **stack_b);
void		stack_add_bottom(t_stack **stack, t_stack *new);
void		get_cost(t_stack **stack_a, t_stack **stack_b);
void		do_rrr(t_stack **stack_a, t_stack **stack_b);
void		do_pa(t_stack **stack_a, t_stack **stack_b);
void		do_pb(t_stack **stack_a, t_stack **stack_b);
void		do_ss(t_stack **stack_a, t_stack **stack_b);
void		do_rr(t_stack **stack_a, t_stack **stack_b);
void		sort(t_stack **stack_a, t_stack **stack_b);
void		assign_index(t_stack *stack_a, int ac);
void		free_stack(t_stack **stack);
void		tiny_sort(t_stack **stack);
void		do_rra(t_stack **stack_a);
void		do_rrb(t_stack **stack_b);
void		do_sa(t_stack **stack_a);
void		do_sb(t_stack **stack_b);
void		do_ra(t_stack **stack_a);
void		do_rb(t_stack **stack_b);
void		ft_putstr(char *str);

#endif
