/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:35:51 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 14:04:26 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size n)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (c == *str)
			return ((void *)s);
		s++;
		str++;
	}
	return (0);
}

// int   main()
// {
//     char str[] = "Hello";
//     printf("%s\n", ft_memchr(str, 'l', 5));
//     return (0);
// }