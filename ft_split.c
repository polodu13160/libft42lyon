/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:34:00 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/17 18:31:12 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free_all(char **tab, int x)
{
	while (x > 0)
		free(tab[--x]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		x;
	char	**tab;

	if (!s || !(tab = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *))))
		return (NULL);
	x = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			if (!(tab[x++] = ft_substr(s, i, j - i)))
				return (ft_free_all(tab, x - 1));
			i = j;
		}
		else
			i++;
	}
	tab[x] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char *s;
// 	char c;
// 	char **result;
// 	int i;

// 	s = "Hello, world !";
// 		c = ' ';
// 	result = ft_split(s, c);
// 	if (result)
// 	{
// 		i = 0;
// 		while (result[i])
// 		{
// 			printf("Result[%d]: '%s'\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return (0);
// }