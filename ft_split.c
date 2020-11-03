/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:50:47 by tblink            #+#    #+#             */
/*   Updated: 2020/11/03 17:27:29 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*
int		countc(char *s, char c)
{
	int t;

	t = 0;
	while (*s)
	{
		if (*s == c)
			t++;
		s++;
	}
	printf("t = %d\n", t);
	if (s[0] == c)
		t--;
	if (*(s - 1) == c)
		t++;
	return (t);
}

char		**ft_split(char const *s, char c)
{
	int				len1;
	char			**buf;
	char			*p;
	char			*start;
	char			*end;

	p = (char *)s;
	len1 = countc(p, c);
	printf("len = %d\n", len1);
	if (!(buf = (char**)malloc(len1 + 1 * sizeof(char*))))
		return (NULL);
	start = (char*)s;
	while (*s && --len1)
	{
		while (!(end = ft_strchr(s, c)))
			s++;
		end++;
		start = end;
		end++;
		s++;
	}
	return (NULL);
}
*/