/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblink <tblink@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:46:04 by tblink            #+#    #+#             */
/*   Updated: 2020/11/03 20:01:33 by tblink           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pwd;

	if (!new)
		return ;
	if (*lst)
	{
		pwd = ft_lstlast((*lst));
		pwd->next = new;
		return ;
	}
	*lst = new;
}
