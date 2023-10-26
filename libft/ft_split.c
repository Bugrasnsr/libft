/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msansar <msansar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:49:05 by msansar           #+#    #+#             */
/*   Updated: 2023/10/17 14:47:04 by msansar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**malloc_error(char **arr, size_t i)
{
	while (arr[i])
		free(arr[i++]);
	return (free(arr), NULL);
}

static int	word_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	if (!*s)
		return (0);
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		a;
	int		i;

	a = -1;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (++a < word_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		res[a] = ft_substr(s, i, word_len(&s[i], c));
		if (!res[a])
			return (malloc_error(res, 0));
		i += word_len(&s[i], c);
	}
	return (res[a] = NULL, res);
}
