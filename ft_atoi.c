/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:50:24 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/19 20:41:09 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int		neg;
	long	number;

	number = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if ((*str) == 43 || *str == 45)
	{
		if (*(str++) == 45)
			neg = -1;
	}
	while (*str >= 48 && *str <= 57)
	{
		if (number > (LONG_MAX - (*str - 48)) / 10)
		{
			if (neg == 1)
				return (-1);
			else
				return (0);
		}
		number = number * 10 + (*str - 48);
		str++;
	}
	return ((int)number * neg);
}
// void	test_ft_atoi(const char *str)
// {
// 	int	result;
// 	int	expected;

// 	result = ft_atoi(str);
// 	expected = atoi(str);
// 	if (result == expected)
// 		printf("Test passed for input % s : %d\n", str, result);
// 	else
// 		printf("Test failed for input % s : got %d, expected %d\n", str,
// 			result, expected);
// }

// int	main(void)
// {
// 	// Tests de base
// 	test_ft_atoi("123");
// 	test_ft_atoi("-123");
// 	test_ft_atoi("+123");
// 	test_ft_atoi("0");
// 	test_ft_atoi("-0");
// 	// Tests avec des espaces blancs
// 	test_ft_atoi("   123");
// 	test_ft_atoi("\t\n\r\v\f123");
// 	// Tests avec des caractères non numériques
// 	test_ft_atoi("123abc");
// 	test_ft_atoi("abc123");
// 	// Tests de dépassement de capacité
// 	test_ft_atoi("9223372036854775807");  // LONG_MAX
// 	test_ft_atoi("-9223372036854775808"); // LONG_MIN
// 	test_ft_atoi("9223372036854775808");  // LONG_MAX + 1
// 	test_ft_atoi("-9223372036854775809"); // LONG_MIN - 1
// 	// Tests avec des chaînes vides et des signes seuls
// 	test_ft_atoi("");
// 	test_ft_atoi("+");
// 	test_ft_atoi("-");
// 	// Tests avec des nombres très grands
// 	test_ft_atoi("1234567892230000222132456");
// 	test_ft_atoi("-1234567892230000222132456");
// 	return (0);
// }

// int	main(void)
// {
// 	char *str = "-9223372036854775809";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }