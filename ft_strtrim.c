/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:25:22 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/17 19:24:42 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start])
	{
		i = 0;
		while (set[i] && set[i] != s1[start])
			i++;
		if (set[i] == s1[start])
			start++;
		else
			break ;
	}
	end = ft_strlen(s1);
	while (s1[--end])
	{
		i = 0;
		while (set[i] && set[i] != s1[end])
			i++;
		if (set[i] != s1[end])
			break ;
	}
	return (ft_substr(s1, start, end - start + 1));
}
// int	main(void)
// {
// 	char *s1 = "abbaHello, world!  jakjkhjkhkjhjkjhkjhb";
// 	char *set = "ab ";
// 	char *result;

// 	result = ft_strtrim(s1, set);
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