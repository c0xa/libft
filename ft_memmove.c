/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:16:25 by tblink            #+#    #+#             */
/*   Updated: 2020/10/30 17:08:45 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		while (i++ < len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (d);
}
