/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:32 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/08 13:50:06 by pde-petr         ###   ########.fr       */
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
        //quel est la difference avec c seul ??????
		len--;
		str++;
	}
	return (b);
}
int	main(void)
{
	char str[50] = "Hello World";
	memset(str, -1, 11);
	printf("%s\n", str);
	return (0);
}