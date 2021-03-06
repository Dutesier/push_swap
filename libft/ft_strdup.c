/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:36:09 by dareias-          #+#    #+#             */
/*   Updated: 2021/02/19 11:11:29 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		l;
	char	*s2;

	i = ft_strlen(s1);
	l = 0;
	s2 = malloc(i + 1);
	if (!s2)
		return (NULL);
	while (s1[l] != '\0')
	{
		s2[l] = s1[l];
		l++;
	}
	s2[l] = '\0';
	return (s2);
}
