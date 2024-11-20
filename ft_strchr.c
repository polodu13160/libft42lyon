/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:16:51 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/20 20:24:34 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || (*s == (const char)c))
	{
		if ((const char)c == *s)
			return ((char *)s);
		s++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str = "";
// 	printf("%p\n", str);
// 	printf("%p\n", ft_strchr(str, '\0'));
// 	return (0);
// }