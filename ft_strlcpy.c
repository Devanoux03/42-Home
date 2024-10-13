/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ernstdevan <ernstdevan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:01:12 by ernstdevan        #+#    #+#             */
/*   Updated: 2024/10/13 18:02:59 by ernstdevan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;

	i = 0;
	dest_len = 16;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < dest_len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
