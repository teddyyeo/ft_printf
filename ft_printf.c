/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:32:08 by tayeo             #+#    #+#             */
/*   Updated: 2022/07/06 15:18:35 by tayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;

	va_start(arg_ptr, format);
	while (*format)
	{
		if (*format != '%')
			ft_putchar_fd(*format, 1);
		else
			format_str_parser(arg_ptr, *(++format));
		format++;
	}
	va_end(arg_ptr);
	return (0);
}
