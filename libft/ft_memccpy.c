/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:00:08 by dareias-          #+#    #+#             */
/*   Updated: 2021/05/22 11:32:52 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	d;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	source = (unsigned char *)src;
	d = (unsigned char)c;
	while (n > 0)
	{
		*dest = *source;
		if (*source == d)
			return (++dest);
		dest++;
		source++;
		n--;
	}
	return (NULL);
}
