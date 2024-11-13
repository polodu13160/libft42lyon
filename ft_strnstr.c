/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:11:51 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/13 20:43:57 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size length)
{
	t_size	i;
	t_size	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < length)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && ((i + j) < length))
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str = "Hello";
// 	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
// 	return (0);
// }