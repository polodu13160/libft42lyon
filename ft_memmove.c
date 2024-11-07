/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:39:15 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/07 15:46:18 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d) // pour eviter le chevauchment 
	{
		i = n;
		printf("%s\n", d);
		while (n > 0)
		{
			d[n-1] = s[n-1]; //lenght -1
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
	
}
/*
int	main(void)
{
	char buffer1[50] = "ABCD";
	char buffer2[50] = "ABCD";

	
	printf("Avant memmove personnalisé (chevauchement) : %s\n", buffer1);
	ft_memmove(buffer1 + 1, buffer1, 1);
	printf("Après memmove personnalisé (chevauchement) : %s\n", buffer1);

	
	printf("Avant memmove standard (chevauchement) : %s\n", buffer2);
	memmove(buffer2 + 1, buffer2, 1);
	printf("Après memmove standard (chevauchement) : %s\n", buffer2);

	
	if (strcmp(buffer1, buffer2) == 0)
	{
		printf("Les deux fonctions produisent le même résultat.\n");
	}
	else
	{
		printf("Les fonctions produisent des résultats différents.\n");
	}

	return (0);
}*/