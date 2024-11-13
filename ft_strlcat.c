/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:16:10 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/13 18:59:25 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	len_src;
	int		len_dst_with_size;
	int		i;

	len_dst_with_size = 0;
	len_src = ft_strlen(src);
	while (dst[len_dst_with_size] != '\0' && len_dst_with_size < size)
	{
		len_dst_with_size++;
	}
	if (size == 0 || size <= len_dst_with_size)
		return (len_src + size);
	i = 0;
	while (len_dst_with_size + i < size - 1 && src[i] != '\0')
	{
		dst[len_dst_with_size + i] = src[i];
		i++;
	}
	dst[len_dst_with_size + i] = '\0';
	return (len_dst_with_size + len_src);
}

// int	main(void)
// {
// 	char *dst = "pqrstuvwxyz";
// 	char *src = "abcd";
// 	printf("%i\n", ft_strlcat(dst, src, 1));
// 	printf("%s\n", dst);
// 	return (0);
// }