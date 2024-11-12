/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:32 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 15:22:07 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, t_size len)
{
	int		i;
	char	*str;

	str = b;
	i = 0;
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