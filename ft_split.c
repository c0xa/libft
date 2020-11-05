/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:50:47 by tblink            #+#    #+#             */
/*   Updated: 2020/11/05 03:42:54 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		count(char const *s, char c)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			len++;
		while (s[i] != c && s[i])
			i++;
	}
	return (len);
}

void	*ft_clean(char **arr, int count)
{
	int	i;

	i = -1;
	while (++i < count)
		free(arr[i]);
	free(arr);
	return (NULL);
}

int		split(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		b;
	int		i;
	int		j;
	char	**buf;

	i = 0;
	b = -1;
	if (!s || !c || !(buf = (char**)malloc(sizeof(char*) * (count(s, c) + 1))))
		return (NULL);
	while (++b < count(s, c))
	{
		j = 0;
		if (!(buf[b] = (char*)malloc(sizeof(char) * (split(&s[i], c) + 1))))
		{
			ft_clean(buf, b);
			return (NULL);
		}
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			buf[b][j++] = s[i++];
		buf[b][j] = '\0';
	}
	buf[b] = NULL;
	return (buf);
}
