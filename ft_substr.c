/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:39:47 by tblink            #+#    #+#             */
/*   Updated: 2020/11/01 18:40:25 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	int		i;

	i = 0;
	if (!s || (buf = (char*)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (*(s + i + start) && len--)
	{
		*(buf + i) = *(s + i + start);
		i++;
	}
	*(buf + i) = '\0';
	i = 0;
	return (buf);
}
