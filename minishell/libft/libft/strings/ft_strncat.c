/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaffier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:00:20 by dbaffier          #+#    #+#             */
/*   Updated: 2018/04/07 13:31:40 by dbaffier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*d;

	d = s1;
	while (*s1)
		s1++;
	while (n--)
		if (!(*s1++ = *s2++))
			return (d);
	*s1 = 0;
	return (d);
}