/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:53:47 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 17:49:39 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>

int	ft_atoi(const char *str);

int	convert_char(char *s, int i)
{
	int	n;

	n = 8;
	while (n > 0)
	{
		result = s[i] 
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	pid = ft_atoi(argv[1]);
	write(1, "1", 1);
	kill(pid, SIGUSR1);
	return (0);
}
