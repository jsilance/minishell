/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:35:49 by jsilance          #+#    #+#             */
/*   Updated: 2020/12/02 01:28:16 by jsilance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strstock(char *ptr, char str)
{
	char	*new_ptr;
	int		*i;

	i = (int[2]){0, 0};
	while (ptr && ptr[i[0]])
		i[0]++;
	i[0]++;
	if (!(new_ptr = malloc(sizeof(char) * (i[0] + 1))))
		return (NULL);
	i[0] = 0;
	while (ptr && ptr[i[0]])
		new_ptr[i[1]++] = ptr[i[0]++];
	new_ptr[i[1]++] = str;
	new_ptr[i[1]] = '\0';
	free(ptr);
	return (new_ptr);
}

static int	str_liner(char *tmp, char temp[OPEN_MAX][BUFFER_SIZE + 1],
				char **line, int fd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!tmp || !temp)
		return (-1);
	while (tmp[i])
		if (tmp[i] == '\n')
		{
			if (tmp[i += (tmp[i] == '\n')])
				while (tmp[i])
					temp[fd][j++] = tmp[i++];
			temp[fd][j] = 0;
			return (0);
		}
		else if (!(*line = ft_strstock(*line, tmp[i++])))
			return (-1);
	temp[fd][0] = 0;
	return (1);
}

int			get_next_line(int fd, char **line)
{
	char		*tmp;
	static char	tmp_fd[OPEN_MAX][BUFFER_SIZE + 1];
	int			*ret;

	if (fd < 0 || !line || BUFFER_SIZE < 1 || fd >= OPEN_MAX)
		return (-1);
	ret = (int[4]){0, !tmp_fd[fd], 0, 0};
	if (!(*line = ft_strdup("")) ||
		!(tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	(!tmp_fd[fd]) ? (int)(tmp_fd[fd][0] = '\0') :
	(ret[1] = str_liner(tmp_fd[fd], tmp_fd, line, fd));
	if (ret[1] && tmp_fd[fd] && !tmp_fd[fd][0])
		while ((ret[0] = read(fd, tmp, BUFFER_SIZE)) > 0 &&
			(ret[2] = 1))
			if ((tmp[ret[0]] = 0) ||
				(ret[3] = str_liner(tmp, tmp_fd, line, fd) != 1))
				break ;
	free(tmp);
	return ((ret[1] == -1 || ret[3] == -1) ? -1 : !(ret[0] == 0 && ret[1]) &&
		(ret[2] || !ret[1] || **line));
}
