/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:27:21 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/19 20:41:45 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tab(int n)
{
	int	neg;
	int	count;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count + neg);
}

static void	add_to_array(int n, char *tab)
{
	int	neg;
	int	i;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	i = 0;
	if (n == 0)
		tab[i] = 48;
	while (n != 0)
	{
		tab[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	if (neg == 1)
		tab[i++] = 45;
}

static void	reverse_tab(char *tab, int count)
{
	int		i;
	char	temp;

	i = 0;
	count--;
	while (i < count)
	{
		temp = tab[i];
		tab[i] = tab[count];
		tab[count] = temp;
		i++;
		count--;
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		count;

	if (n == -2147483648)
	{
		tab = ft_calloc(12, sizeof(char));
		if (!tab)
			return (NULL);
		ft_strlcpy(tab, "-2147483648", 12);
		return (tab);
	}
	else
	{
		count = count_tab(n);
		tab = ft_calloc(count + 1, sizeof(char));
		if (!tab)
			return (NULL);
		add_to_array(n, tab);
		reverse_tab(tab, count);
	}
	return (tab);
}
// int	main(void)
// {
//     char *res;
// 	printf("%s\n", res = ft_itoa(9));
//     free(res);
// 	return (0);
// }