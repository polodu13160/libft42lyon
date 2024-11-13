/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:51:24 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/13 17:30:36 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str2 = (unsigned char *)s2;
	str1 = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)str1[i] - str2[i]);
		i++;
	}
	return (0);
}
