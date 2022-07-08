/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:34:54 by tayeo             #+#    #+#             */
/*   Updated: 2022/07/08 17:03:15 by tayeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	test_char = 'a';
	char	*test_str = "Hello please test me!";
	int		test_num = 2147483647; //INT MAX = 2147483647
	unsigned int		test_num2 = 4294967295; //UINT MAX = 4294967295
	int	test_num3 = -454353;

	puts("%c test");
	printf("ret: %d ", printf("printf:    %c\n", test_char));
	printf("ret: %d ", ft_printf("ft_printf: %c\n", test_char));
	puts("");
	puts("%s test");
	printf("ret: %d ", printf("printf:    %s\n", NULL));
	printf("ret: %d", ft_printf("ft_printf: %s\n", NULL));
	puts("");
	puts("%p test");
	printf("ret: %d ", printf("printf:    %p\n", test_str));
	printf("ret: %d", ft_printf("ft_printf: %p\n", test_str));
	puts("");
	puts("%d test");
	printf("ret: %d ", printf("printf:    %d\n", test_num));
	printf("ret: %d", ft_printf("ft_printf: %d\n", test_num));
	puts("");
	puts("%i test");
	printf("ret: %d ", printf("printf:    %i\n", test_num));
	printf("ret: %d ", ft_printf("ft_printf: %i\n", test_num));
	puts("");
	puts("%u test");
	printf("ret: %d ", printf("printf:    %u\n", test_num2));
	printf("ret: %d", ft_printf("ft_printf: %u\n", test_num2));
	puts("");
	puts("%x test");
	printf("ret: %d ", printf("printf:    %x\n", test_num3));
	printf("ret: %d", ft_printf("ft_printf: %x\n", test_num3));
	puts("");
	puts("%X test");
	printf("ret: %d ", printf("printf:    %X\n", test_num3));
	printf("ret: %d", ft_printf("ft_printf: %X\n", test_num3));
	puts("");
	puts("%% test");
	printf("ret: %d ", printf("printf:    %%\n"));
	printf("ret: %d", ft_printf("ft_printf: %%\n"));
}
