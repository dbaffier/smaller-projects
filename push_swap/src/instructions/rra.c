/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaffier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 23:21:17 by dbaffier          #+#    #+#             */
/*   Updated: 2019/06/23 18:51:19 by mmonier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rra(t_stack *stack, t_pile *a, t_pile *b)
{
	(void)b;
	if (a && a->next)
		stack->a = a->prev;
}
