/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_str_parser.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:34:31 by tayeo             #+#    #+#             */
/*   Updated: 2022/07/06 18:21:14 by tayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_str_parser(va_list arg_ptr, char format)
{
	if (format == 'c')
		ft_putchar_fd(va_arg(arg_ptr, int), 1);
	else if (format == 's')
		ft_putstr_fd(va_arg(arg_ptr, char *), 1);
	else if (format == 'p')
		put_hex_addr(va_arg(arg_ptr, void *));
	else if (format == 'd' || format == 'i')
		ft_putnbr_fd(va_arg(arg_ptr, int), 1);
	else if (format == 'u')
		put_uint(va_arg(arg_ptr, unsigned int));
	else if (format == 'x' || format == 'X')
		put_hex_int(va_arg(arg_ptr, int), format);
	else if (format == '%')
		ft_putchar_fd('%', 1);
}
