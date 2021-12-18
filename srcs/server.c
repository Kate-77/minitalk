/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <kmoutaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:53:57 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 23:27:56 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static void	convert_bc(int n)
{
	static char	c;
	static int	j;
	
	c = c | n;
	if (j < 7)
		c = c << 1;
	j++;
	if (j > 7)
	{
		ft_putchar_fd(c, 1);
		j = 0;
		c = 0;
	}
}

static void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		convert_bc(0);
	else if (signum == SIGUSR2)
		convert_bc(1);
}

int	main()
{
	pid_t	p;

	p = getpid();
	ft_putnbr_fd(p, 1);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		sleep(1);
	return (0);
}
