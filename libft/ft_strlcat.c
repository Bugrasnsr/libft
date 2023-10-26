/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:00:26 by msansar           #+#    #+#             */
/*   Updated: 2023/10/17 14:47:28 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[i];
		c++;
		i++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
