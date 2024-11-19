/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:22:58 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/19 17:52:16 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	char	*ptr;

// 	ptr = NULL;
// 	while (*s != '\0')
// 	{
// 		if (*s == c)
// 			ptr = (char *)s;
// 		s++;
// 	}
// 	if (c == '\0')
// 		return ((char *)s);
// 	return (ptr);
// }

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
