/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:40:06 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/21 22:47:27 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*malloc_str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	malloc_str = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (malloc_str == NULL)
		return (NULL);
	while (*s1)
		*(malloc_str++) = *(s1++);
	while (*s2)
		*(malloc_str++) = *(s2++);
	return (malloc_str - (len_s1 + len_s2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "Hello, ";
// 	s2 = "world!";
// 	result = ft_strjoin(NULL, NULL);
// 	if (result)
// 	{
// 		printf("Result: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return (0);
// }
