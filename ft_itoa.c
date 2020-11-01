/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:32:43 by tblink            #+#    #+#             */
/*   Updated: 2020/11/01 19:25:25 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# include <unistd.h>

size_t		sizeInt(int num)
{
	size_t k;

	k = 0;
	while (num)
	{
		num /= 10;
		k++;
	}
	return (k);
}


char	*ft_itoa(int num)
{
	char *buf;
	int k;
	size_t len;
	int tens;

	tens = 1;
	len = sizeInt(num);
	if (!(buf = (char*)malloc(len + 1 * (sizeof(char)))))
		return (NULL);
	while (len--)
		tens *= 10;
	k = 0;
	if (num < 0)
	{
		num *= -1;
		buf[k++] = 45;
	}
	tens /= 10;
	if (!num)
		buf[k] = '0';
	while (num)
	{
		if (num / tens > 0)
			buf[k++] = num / tens + 48;
		else
			buf[k++] = '0';
		num %= tens;
		tens /= 10;
	}
	buf[k] = '\0';
	return (buf);
}
