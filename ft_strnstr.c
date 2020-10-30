/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:24:40 by tblink            #+#    #+#             */
/*   Updated: 2020/10/30 15:31:18 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char     *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	if (!*needle)
	{
		return ((char*)haystack);
	}
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while (needle[k] && haystack[i + k] == needle[k] && (i + k < len))
				i++;
			if (needle[k])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return ("0");
}
