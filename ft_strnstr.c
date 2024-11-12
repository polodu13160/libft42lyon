/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:11:51 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/08 17:49:56 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size len)
{
	char	str_search[len];
	t_size	i;
	int		j;

	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		str_search[i] = haystack[i];
		i++;
	}
	str_search[i] = '\0';
	i = 0;
	while (str_search[i])
	{
		j = 0;
		while (needle[j] == str_search[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char *str = "Hello";
	printf("%s\n", ft_strnstr(str, "llo", 4));
	return (0);
}