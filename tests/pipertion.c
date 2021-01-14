/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 22:58:06 by jsilance          #+#    #+#             */
/*   Updated: 2021/01/14 02:14:52 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

/*
**	--pipe--
**	
**	write()	p[1] --> -->
**						|
**						V
**	read()	p[0] <-- <--
**	
**	doc: https://www.geeksforgeeks.org/pipe-system-call/
**	
**	
**	int dup(fd)
**	dup copy a fd
**	
**	int dup2(int fd1, int fd2)
**	dup2 = duplicate to
**	change fd1 by fd2
**	
**	doc: https://www.geeksforgeeks.org/dup-dup2-linux-system-call/
*/

int		s_pro_two(int fd)
{
	int		i;
	int		j;
	char	str[4];
	// char	*str;

	// str = NULL;
	i = 0;
	j = 1;
	while (i <= 50)
	{
		read(fd, &str, j);
		// get_next_line(fd, &str);
		printf("--test2 %s\n", str);
		ft_putstr_fd(str, fd);
		if (ft_atoi(str) == 9)
			j++;
		else if(ft_atoi(str) == 99)
			j++;
		i++;
	}
	return (0);
}

int		s_pro_one(int fd)
{
	int		i;
	char	*str;
	char	*strt;

	i = 0;
	while (i <= 50)
	{
		str = ft_itoa(i++);
		write(fd, str, ft_strlen(str));
		printf("test1 %s\n", str);
		free(str);
	}
	return (0);
}

int		main()
{
    int     fd[2];
	int		pid;
	// char	ptr[4];
	
    pipe(fd);
	pid = fork();
	printf("PID:[%d]\n", pid);
	if (pid == 0)
		s_pro_one(fd[1]);
	else
		s_pro_two(fd[0]);
	
	// write(fd[1], "flop", 4);
	// read(fd[0], ptr, 4);
	// ft_putstr_fd(ptr, 1);
	return (0);
}
