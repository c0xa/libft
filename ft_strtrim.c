/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:13:13 by tblink            #+#    #+#             */
/*   Updated: 2020/11/01 14:46:02 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <unistd.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;
	char	*buf;
	int		i;
	int		mark;
	int		j;

	i = 0;
	j = 0;
	mark = 1;
	len1 = ft_strlen(s1);
	if (!(buf = (char*)malloc((len1 + 1) * sizeof(char))))
		return (NULL);
	while (*s1)
	{
	//printf("buf= %c \n", s1[i]);
		j = 0;
		mark = 1;
		while (set[j])
		{
			//printf("s1= %c  set =  %c\n", s1[i], set[j]);
			if (*s1 == set[j++])
			{
				mark = 0;
				//printf("mark %d\n", mark);
			}
		}
		if (mark)
			buf[i++] = *s1;
		//printf("finish buf= %c \n", buf[i]);
		s1++;
	}
	buf[i] = '\0';
	return (buf);
}
