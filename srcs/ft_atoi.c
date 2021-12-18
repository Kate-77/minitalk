/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:33:32 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 23:25:50 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_atoi is a re-coded -atoi- function from <stdlib.h> that converts the
	string pointed to by str to an integer.
*/

#include "../minitalk.h"

static int	ft_convert(const char *str, int i, int result, int sign)
{
	while (ft_isdigit(str[i]))
	{
		if ((((unsigned long)result * 10) + (str[i] - '0'))
			> (unsigned long)9223372036854775807 && sign > 0)
			return (-1);
		if ((((unsigned long)result * 10) + (str[i] - '0'))
			> (unsigned long)9223372036854775807 + 1 && sign < 0)
			return (0);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;
	int	repeat;

	repeat = 0;
	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = ft_convert(str, i, result, sign);
	return (result);
}
