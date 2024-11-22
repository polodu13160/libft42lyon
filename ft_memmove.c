/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:39:15 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/22 17:50:07 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
	{
		while (n-- > 0)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int	main(void)
{
	char buffer1[50] = "ABCD";
	char buffer2[50] = "ABCD";
pointer1 : permet de spécifier l'adresse du premier bloc mémoire à comparer.
pointer2 : permet de spécifier l'adresse du second bloc mémoire à comparer.
size : indique le nombre d'octets maximal à comparer.

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