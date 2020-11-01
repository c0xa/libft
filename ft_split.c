/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:50:47 by tblink            #+#    #+#             */
/*   Updated: 2020/11/01 16:32:13 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char **ft_ssplit(char const *s, char c)
{
	size_t	len1;
	char	*buf;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	len1 = ft_strlen(s);
    if (!(buf = (char**)malloc(len1 * sizeof(char*))))
		return (NULL);
    while (*s)
	{
		j = 0;
		if (*s == c)
			while (*s + (k++) != c)
		buf[i] = (char*)malloc(k + 1 * sizeof(char));
		while (k--)
		{
			buf[i][j++] = *s--;
		}

  	}

	}	

	buf[i] = '\0';
	return (buf);
}
}
*/