/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:01:33 by dareias-          #+#    #+#             */
/*   Updated: 2021/05/22 11:34:11 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	char	*latest;

	d = (char *)s;
	latest = 0;
	while (*d != '\0')
	{
		if (*d == (char)c)
			latest = d;
		d++;
	}
	if (*d == (char)c)
		return (d);
	else
		return (latest);
}
