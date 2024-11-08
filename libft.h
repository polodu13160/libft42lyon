/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:38 by pde-petr          #+#    #+#             */
/*   Updated: 2024/11/08 14:36:31 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
typedef unsigned long	t_size;
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
t_size					ft_strlen(const char *s);
void					*ft_memset(void *b, int c, t_size len);
void					bzero(void *s, t_size n);
void					*ft_memcpy(void *dst, const void *src, t_size n);
void					*ft_memmove(void *dest, const void *src, t_size n);
t_size					ft_strlcpy(char *dst, const char *src, t_size size);
t_size					ft_strlcat(char *dst, const char *src, t_size size);
int						ft_toupper(int c);
int						ft_tolower(int c);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
int						ft_strncmp(const char *s1, const char *s2, t_size n);
void					*ft_memchr(const void *s, int c, t_size n);
int						ft_memcmp(const void *s1, const void *s2, t_size n);
char					*ft_strnstr(const char *haystack, const char *needle, t_size len);
int						ft_atoi(const char *str);
#endif