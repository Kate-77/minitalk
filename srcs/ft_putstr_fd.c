/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:43:07 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 23:27:07 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_putstr_fd is a function that outputs the string ’s’ to the given file
	descriptor.
*/

#include "../minitalk.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return ;
}
