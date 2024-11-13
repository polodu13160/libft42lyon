/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:32 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/13 20:37:49 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, t_size len)
{
	char	*str;

	str = b;
	while (len)
	{
		*str = (unsigned char)c;
		len--;
		str++;
	}
	return (b);
}
/* quel est la difference avec c seul ?????? */

/* int	main(void)
{
	char str[50] = "Hello World";
	memset(str, -1, 11);
	printf("%s\n", str);
	return (0);
} */