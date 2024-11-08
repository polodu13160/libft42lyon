/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:22:58 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/08 16:25:42 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    while (*s)
        s++;
    while (*s > 0){
        if (*s == c)
            return (char *)s;
        s--;
    }
    return (0);  
}

// int main()
// {
//     char *str = "Hello";
//     printf("%s\n", ft_strrchr(str, 'l'));
//     return (0);
// }


