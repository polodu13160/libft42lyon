/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:22:58 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/12 12:00:36 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    while (*s)
        s++;
    s--;
    while (*s > 0)
    {
        if (*s == c)
            return (char *)s;
        s--;
    }
    return (0);  
}

// int main()
// {
//     char *str = "Helo";
//     printf("%s\n", ft_strrchr(str, 'l'));
//     return (0);
// }


