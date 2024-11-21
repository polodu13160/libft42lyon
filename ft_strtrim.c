/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:25:22 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/21 21:18:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strtrim_start(char const *s1, char const *set, size_t start)
{
	size_t	i;

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
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	start = strtrim_start(s1, set, start);
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
// 	char *s1 = "abbb";
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