/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:19:24 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 17:45:16 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_size(int n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	main()
{
	int	n;
	int	size;
	char *str = "Kaoutar";
	while (*str)
	{
		n = 8;
		size = ft_size(*str);
		while (n && size)
		{
			printf("%d", *str >> 2 & 1);
			n--;
		}
		printf("\n");
		str++;
	}
}
