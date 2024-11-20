/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:49:28 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/20 16:06:41 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*f_content;

	new_list = NULL;
	while (lst && f && del)
	{
		f_content = f(lst->content);
		if (!f_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_elem = ft_lstnew(f_content);
		if (!new_elem)
		{
			del(f_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
