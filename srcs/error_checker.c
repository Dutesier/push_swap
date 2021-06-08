/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dareias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:57:38 by dareias-          #+#    #+#             */
/*   Updated: 2021/06/08 13:12:23 by dareias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int str_check(char *str) // For bad input or int too big/small
{
	unsigned long	atoix;
	int				neg;

	atoix = 0;
	neg = 1;
	while ((8 < *str && *str < 14) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9' && *str)
	{
		atoix = atoix * 10 + ((int)*str - 48);
		str++;
	}
	if ((atoix > 2147483647 && neg == 1) || (atoix > 2147483648 && neg == -1))
		return (0);
	if (*str != '\0' && (*str < '0' || *str > '9'))
		return (0);
	return (1);
}

int error_checker(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (str_check(argv[i++]) == 0)
			return (0);
	}
	return (1);
}

