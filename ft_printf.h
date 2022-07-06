/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:36:53 by tayeo             #+#    #+#             */
/*   Updated: 2022/07/06 18:13:46 by tayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	format_str_parser(va_list arg_ptr, char format);
void	put_uint(unsigned int num);
void	put_hex_int(int num, char c);
void	put_hex_addr(void *addr);
#endif
