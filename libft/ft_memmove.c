/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:00:25 by dareias-          #+#    #+#             */
/*   Updated: 2021/05/22 11:35:53 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		dest = (unsigned char *)dst;
		source = (unsigned char *)src;
		while (len-- > 0)
			*dest++ = *source++;
	}
	else
	{
		dest = (unsigned char *)dst + (len - 1);
		source = (unsigned char *)src + (len - 1);
		while (len-- > 0)
			*dest-- = *source--;
	}
	return (dst);
}
