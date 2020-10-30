/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:22:11 by tblink            #+#    #+#             */
/*   Updated: 2020/10/30 18:24:47 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t						ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t sj;
	size_t di;
	size_t len;

	sj = 0;
	di = 0;
	len = 0;
	while (src[sj])
		sj++;
	while (dst[len])
		len++;
	if (size <= sj)
		len += size;
	else
		len += sj;
	while (sj + 1 < size && src[di])
	{
		dst[sj] = src[di];
		di++;
		sj++;
	}
	dst[sj] = '\0';
	return (len);
}
