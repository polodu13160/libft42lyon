/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:24:02 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 15:29:44 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char	*string_malloc;
	t_size	i;

	string_malloc = malloc(sizeof(char) * len);
	if (string_malloc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len && s[start] != '\0')
	{
		string_malloc[i] = s[start];
		i++;
		start++;
	}
	return (string_malloc);
}
