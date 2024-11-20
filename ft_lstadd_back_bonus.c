/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:48:44 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/20 16:40:53 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && new)
	{
		if (!(*lst))
		{
			*lst = new;
		}
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
	}
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *new_node;

// 	// Création du premier élément de la liste
// 	list = ft_lstnew("Premier élément");

// 	// Création d'un nouvel élément à ajouter à la fin
// 	new_node = ft_lstnew("Deuxième élément");

// 	// Ajout du nouvel élément à la fin de la liste

// 	ft_lstadd_back(&list, new_node);
// 	// Affichage des éléments de la liste
// 	t_list *current = list;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	// faire Libération de la mémoire allouée  mais bellec;
// 	return (0);
// }