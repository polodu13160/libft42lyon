/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:33:08 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/17 22:43:31 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = ft_strdup(s);
	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}
// char	f(unsigned int i, char c)
// {
// 	if (c >= 97 && c <= 122)
// 		c += -32;
// 	return (c);
// }

// int	main(void)
// {
// 	char *str = "Hello, world!";
// 	char *result;

// 	result = ft_strmapi(str, f);
// 	if (result)
// 	{
// 		printf("Result: '%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return (0);
// }