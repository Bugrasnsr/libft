/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:44:12 by msansar           #+#    #+#             */
/*   Updated: 2023/10/17 20:07:18 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = -1;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[++h] && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && haystack[h + n]
			&& h + n < len)
			n++;
		if (!needle[n])
			return ((char *)haystack + h);
	}
	return (0);
}
