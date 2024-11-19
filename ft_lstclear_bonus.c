/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldepetrini <pauldepetrini@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:23:30 by pauldepetri       #+#    #+#             */
/*   Updated: 2024/11/19 14:29:38 by pauldepetri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

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