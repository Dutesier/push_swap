/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 09:59:35 by dareias-          #+#    #+#             */
/*   Updated: 2021/02/19 10:44:35 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*nxt;

	curr = *lst;
	while (curr)
	{
		nxt = curr->next;
		ft_lstdelone(curr, del);
		curr = nxt;
	}
	*lst = NULL;
}
