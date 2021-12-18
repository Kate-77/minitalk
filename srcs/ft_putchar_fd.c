/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:25:43 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 23:26:47 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_putchar_fd is a function that outputs the character ’c’ to the given 
	file descriptor.
*/

#include "../minitalk.h" 

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
