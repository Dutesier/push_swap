/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:01:37 by dareias-          #+#    #+#             */
/*   Updated: 2021/05/22 11:35:40 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0' && set)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_empty(void)
{
	char	*empty;

	empty = malloc(sizeof(char));
	if (!empty)
		return (NULL);
	ft_memset(empty, '\0', 1);
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*s2;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_empty());
	end = ft_strlen(s1) - 1;
	while (ft_isset(s1[end], set))
		end--;
	if (start == end)
		return (ft_empty());
	s2 = malloc(end - start + 2);
	ft_strlcpy(s2, s1 + start, end - start + 2);
	return (s2);
}
