/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:42:58 by msansar           #+#    #+#             */
/*   Updated: 2023/10/20 01:04:03 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((char)str1[i] - (char)str2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char *a = "ekmbk";
	char *b = "ekmak";
	
	printf("%d", ft_memcmp(a,b,5));
}