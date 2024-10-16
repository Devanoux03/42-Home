/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernstdevan <ernstdevan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:07:56 by ernstdevan        #+#    #+#             */
/*   Updated: 2024/10/13 18:16:52 by ernstdevan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int	ft_isalpha(int c);
int	ft_digit(int c);
int	ft_alnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *s);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_strlcpy(char *dest, const char *src, size_t n);
void				*ft_strlcat(char *dest, const char *src, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int	ft_strcmp(const char *s1, const char *s2);
void		*ft_memchr(const void *s, int c, size_t n);

#endif