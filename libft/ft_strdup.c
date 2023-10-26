/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:34:20 by msansar           #+#    #+#             */
/*   Updated: 2023/10/20 02:03:39 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str);
	str2 = (char *)malloc(len + 1);
	if ((str2) == NULL)
		return (NULL);
	ft_memcpy(str2, str, len + 1);
	return (str2);
}
#include <stdio.h>
int main()
{
	char *a = "ekmek";
	char *b = ft_strdup(a);
	printf("%s",b);
}
