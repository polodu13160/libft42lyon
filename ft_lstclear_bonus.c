/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:23:30 by pauldepetri       #+#    #+#             */
/*   Updated: 2024/11/19 17:56:08 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del && *lst)
	{
		temp = *lst;
		*lst = temp->next;
		if (temp->next)
		{
			ft_lstclear(lst, del);
		}
		del(temp->content);
		free(temp);
	}
}
