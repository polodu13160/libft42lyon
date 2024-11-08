/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:22:23 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/08 18:23:17 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
    char *str;
    t_size len;

    len = ft_strlen(s);
    str = (char *)malloc(len + 1);
    if (str == NULL)
        return (NULL);
    ft_memcpy(str, s, len);
    str[len] = '\0';
    return (str);
}