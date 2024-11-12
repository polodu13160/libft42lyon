/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:11:51 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 15:41:20 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size length)
{
	t_size	i;
	int		j;

	i = 0;
	while (*needle == '\0')
		return (&*haystack);
	while (haystack[i] && i < length)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && ((i + j) == length))
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
	printf("%s\n", ft_strnstr(str, "", 4));
	return (0);
}