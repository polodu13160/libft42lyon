/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:50:24 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 14:03:58 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	number;

	number = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if ((*str) == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	return (number * neg);
}

// int    main()
// {
//     char *str = "       A123";
//     printf("%d\n", ft_atoi(str));
//     return (0);
// }