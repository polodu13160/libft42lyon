/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldepetrini <pauldepetrini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:44:24 by pauldepetri       #+#    #+#             */
/*   Updated: 2024/11/17 23:54:05 by pauldepetri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
        {
            ft_putchar_fd(45, fd);
            n = -n;
        }
        if (n >= 10)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + 48, fd);
	}
}