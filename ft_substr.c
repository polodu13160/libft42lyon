/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:24:02 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/20 16:30:38 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string_malloc;
	size_t	i;
	size_t	len_str;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (len_str <= start)
		len = 0;
	else if (len > (len_str - start))
		len = (len_str - start);
	string_malloc = ft_calloc(len + 1, sizeof(char));
	if (string_malloc == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		string_malloc[i] = s[start + i];
		i++;
	}
	string_malloc[i] = '\0';
	return (string_malloc);
}

// int	main(void)
// {
// 	char	*str;
// 	size_t	size;
// 	char	*ret;

// 	str = "01234";
// 	size = 10;
// 	ret = ft_substr(str, 10, size);
// 	if (!strncmp(ret, "", 1))
// 	{
// 		free(ret);
// 		exit(0); // TEST_SUCCESS
// 	}
// 	free(ret);
// 	exit(1); // TEST_FAILED
// }
