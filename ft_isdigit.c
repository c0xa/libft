/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:43:53 by tblink            #+#    #+#             */
/*   Updated: 2020/10/29 18:57:14 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
