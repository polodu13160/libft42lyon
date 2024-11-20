/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:34:00 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/20 16:33:30 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free_all(char **tab, int x)
{
	while (x > 0)
	{
		free(tab[--x]);
	}
	free(tab);
	return (NULL);
}

int	fill_tab(char const *s, char c, char **tab)
{
	int	j;
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			tab[x] = ft_substr(s, i, j - i);
			if (!tab[x++])
			{
				ft_free_all(tab, x);
				return (0);
			}
			i = j;
		}
		else
			i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**tab;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	tab = ft_calloc(words + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	if (fill_tab(s, c, tab) != 1)
		return (NULL);
	tab[words] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char *s;
// 	char c;
// 	char **result;
// 	int i;

// 	s = "Hello, world !";
// 	c = ' ';
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