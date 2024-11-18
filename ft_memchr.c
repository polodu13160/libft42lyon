/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:35:51 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/18 13:27:24 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((char)c == str[i])
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

// int   main()
// {
//     char str[] = "Hello";
//     printf("%s\n", ft_memchr(str, 'l', 5));
//     return (0);
// }