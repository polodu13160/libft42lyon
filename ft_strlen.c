/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:25 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 14:04:55 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *c)
{
	t_size	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

// int main()
// {
//     char *str = "Hello";
//     printf("%d\n", ft_strlen(str));
//     return (0);
// }