/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:36:42 by jomunoz           #+#    #+#             */
/*   Updated: 2025/05/16 22:46:54 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
// #include "get_next_line_utils.c"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		readbytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	readbytes = 1;
	while (!if_new_line_exists(line))
	{
		if (*buffer == '\0')
		{
			readbytes = read(fd, buffer, BUFFER_SIZE);
			if (readbytes >= 0)
				buffer[readbytes] = '\0';
		}
		if (readbytes == -1)
			return (free (line), NULL);
		if (readbytes == 0)
			return (line);
		line = copy_to_line(line, buffer);
		get_the_rest(buffer);
	}
	return (line);
}

int main(void)
{
	int     fd;
	char    *line;

	// fd = open("teste.txt", O_RDONLY);
	fd = 0;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	return (0);
}