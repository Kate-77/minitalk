/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:53:57 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 17:49:42 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

void	ft_putnbr_fd(int n, int fd);

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		write(1, "Whatever", 8);
}

int	main()
{
	pid_t	p;

	p = getpid();
	ft_putnbr_fd(p, 1);
	signal(SIGUSR1, signal_handler);
	while (1)
		sleep(1);
	return (0);
}
