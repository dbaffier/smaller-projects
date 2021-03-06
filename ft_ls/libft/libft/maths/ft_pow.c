/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaffier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 08:01:43 by dbaffier          #+#    #+#             */
/*   Updated: 2018/06/18 11:45:33 by dbaffier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int x, unsigned int y)
{
	int		temp;

	if (y == 0)
		return (1);
	temp = ft_pow(x, y / 2);
	if (y % 2 == 0)
		return (temp * temp);
	else
		return (x * temp * temp);
}
