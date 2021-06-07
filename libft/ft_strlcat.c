/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:01:06 by dareias-          #+#    #+#             */
/*   Updated: 2021/05/22 11:36:12 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	g;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	g = 0;
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	while (dst_len + g < dstsize - 1 && src[g] != '\0')
	{
		dst[dst_len + g] = src[g];
		g++;
	}
	dst[dst_len + g] = '\0';
	return (dst_len + src_len);
}
