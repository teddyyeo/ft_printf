/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:04:12 by tayeo             #+#    #+#             */
/*   Updated: 2022/07/06 18:44:50 by tayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex(unsigned long num, int type_size, char c)
{
	int	temp;
	int	i;
	int	ret_value;

	temp = (num >> (4 * (2 * type_size - 1))) & 0xF;
	i = 2 * type_size - 2;
	ret_value = 0;
	while (temp == 0)
		temp = (num >> (4 * i--)) & 0xF;
	while (i >= -1)
	{
		ft_putchar_fd("0123456789ABCDEF"[temp] | (c - 'X'), 1);
		ret_value++;
		temp = (num >> (4 * i--)) & 0xF;
	}
}

int	put_hex_int(int num, char c)
{
	return (put_hex(num, sizeof(int), c));
}

int	put_hex_addr(void *addr)
{
	unsigned long	num_addr;

	if (addr == NULL)
	{
		ft_printf("(null)");
		return (ft_strlen("(null)"));
	}
	else
	{
		ft_printf("0x");
		num_addr = (unsigned long)addr;
		return (put_hex(num_addr, sizeof(unsigned long), 'x') + 2);
	}
}
