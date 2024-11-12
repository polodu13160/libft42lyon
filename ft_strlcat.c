/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:16:10 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 14:04:49 by pde-petr         ###   ########.fr       */
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
	if (size == 0)
		return (len_src);
	while (dst[len_dst_with_size] != '\0' && len_dst_with_size < size)
	{
		len_dst_with_size++;
	}
	i = 0;
	while (len_dst_with_size + i < size && src[i] != '\0')
	{
		dst[len_dst_with_size + i] = src[i];
		i++;
	}
	dst[len_dst_with_size + i] = '\0';
	return (len_dst_with_size + i);
}

// int main()
// {
//     char dst[10] = "Hello";
//     char *src = "World";
//     printf("%lu\n", ft_strlcat(dst, src, 7));
//     printf("%s\n", dst);
//     return (0);
// }