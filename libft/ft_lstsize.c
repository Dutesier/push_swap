/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:00:03 by dareias-          #+#    #+#             */
/*   Updated: 2021/02/19 10:57:56 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*n;

	if (!lst)
		return (0);
	size = 1;
	n = lst->next;
	while (n != NULL)
	{
		size++;
		n = n->next;
	}
	return (size);
}
