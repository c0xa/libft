/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:27:56 by tblink            #+#    #+#             */
/*   Updated: 2020/10/29 19:00:26 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, int len);
{
    int i;
    int k;
    i = 0;
    while (haystack[i] != *needle) {
        i++;
    }
    k = i
    while (haystack[i] == *needle && len > 0)
    {
        len--;
        i++;
        needle++;
    }
    if (haystack[i - 1] == needle[len])
        return ((char*)&haystack[k]);
    else
        return (0);
}
