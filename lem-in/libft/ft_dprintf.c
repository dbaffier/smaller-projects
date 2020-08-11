/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaffier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 22:04:22 by dbaffier          #+#    #+#             */
/*   Updated: 2019/06/06 23:28:07 by dbaffier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_dprintf_buff(t_format *data)
{
	data->ret += data->pos;
	write(*(int *)data->fd, data->buff, data->pos);
}

int			ft_dprintf(int fd, const char *str, ...)
{
	t_format	data;
	int			nb_char;

	nb_char = 0;
	ft_memset(&data, 0, sizeof(data));
	data.tail = (char *)str;
	data.print_buff = ft_dprintf_buff;
	data.id = 1;
	data.fd = &fd;
	va_start(data.arg, str);
	va_copy(data.copy, data.arg);
	ft_preparse(&data);
	data.tail = (char *)str;
	ft_parse(&data);
	va_end(data.arg);
	return (nb_char);
}
