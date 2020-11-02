/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:35:32 by tblink            #+#    #+#             */
/*   Updated: 2020/11/02 22:05:19 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t		sizen(int digit)
{
	int len;

	len = 0;
	if (digit == 0)
		return (1);
	while (digit)
	{
		digit /= 10;
		len++;
	}
	return (len);
}

void		ft_putnbr_fd(int n, int fd)
{
	long int	digit;
	size_t		len;
	int			k;

	digit = n;
	k = 1;
	len = sizen(digit);
	if (n < 0)
	{
		write(fd, "-", 1);
		digit *= -1;
	}
	while (len--)
		k *= 10;
	len = sizen(digit);
	while (len--)
	{
		write(fd, (char *)(digit / k + 48), 1);
		digit %= k;
	}
}
*/

void		ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}