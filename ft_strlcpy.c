/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:50:26 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/08 13:50:06 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size size)
{
	t_size	len_s;
	t_size	len_d;
	t_size	i;

	len_s = ft_strlen(src);
	len_d = ft_strlen(src);
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_s);
}

// int	main(void)
// {
// 	char src[] = "Hhjhhhhhhhhhhhhhhhk";
// 	char dst[10] = "W";
// 	t_size size = 5;

// 	//printf("%zu\n, %s", strlcpy(dst, src, size), dst);
// 	printf("%d\n, %s", ft_strlcpy(dst, src, size), dst);
// 	return (0);
// }