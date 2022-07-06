/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:34:54 by tayeo             #+#    #+#             */
/*   Updated: 2022/07/06 18:22:41 by tayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	test_char = 'a';
	char	*test_str = "Hello please test me!";
	int		test_num = 2147483647; //INT MAX = 2147483647
	unsigned int		test_num2 = 4294967295; //UINT MAX = 4294967295
	int	test_num3 = 454353;

	puts("%c test");
	printf("printf:    %c\n", test_char);
	ft_printf("ft_printf: %c\n", test_char);
	puts("");
	puts("%s test");
	printf("printf:    %s\n", test_str);
	ft_printf("ft_printf: %s\n", test_str);
	puts("");
	puts("%p test");
	printf("printf:    %p\n", test_str);
	ft_printf("ft_printf: %p\n", test_str);
	puts("");
	puts("%d test");
	printf("printf:    %d\n", test_num);
	ft_printf("ft_printf: %d\n", test_num);
	puts("");
	puts("%i test");
	printf("printf:    %i\n", test_num);
	ft_printf("ft_printf: %i\n", test_num);
	puts("");
	puts("%u test");
	printf("printf:    %u\n", test_num2);
	ft_printf("ft_printf: %u\n", test_num2);
	puts("");
	puts("%x test");
	printf("printf:    %x\n", test_num3);
	ft_printf("ft_printf: %x\n", test_num3);
	puts("");
	puts("%X test");
	printf("printf:    %X\n", test_num3);
	ft_printf("ft_printf: %X\n", test_num3);
	puts("");
	puts("%% test");
	printf("printf:    %%\n", test_num3);
	ft_printf("ft_printf: %%\n", test_num3);
}
