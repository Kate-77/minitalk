/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <kmoutaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:53:47 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/12/18 23:27:23 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static void	convert_cb(char c, pid_t pid)
{
	int	j;
	char	s;

	j = 0;
	while (j < 8)
	{
		if ((c >> (7 - j) & 1) == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		j++;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*s;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		s = argv[2];
		while (*s)
		{
			convert_cb(*s, pid);
			s++;
		}
	}
	else
		write(1, "Meh", 3);
	return (0);
}
