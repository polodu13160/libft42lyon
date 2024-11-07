/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:38 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/07 16:45:31 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
typedef unsigned long	size_t;
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
size_t					ft_strlen(const char *s);
void					*ft_memset(void *b, int c, size_t len);
void					bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
size_t					strlcpy(char *dst, const char *src, size_t size);
// size_t					strlcat(char *dst, const char *src, size_t size);
#endif