/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 08:06:08 by ktwomey           #+#    #+#             */
/*   Updated: 2018/06/15 10:48:18 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static int			ft_isnewline (const char *str)
{
	if (ft_strcmp(str, '\n') != 0)
	{
		return (0);
	}
	else 
		return (1);
}
	
static int			ft_linecpy(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int					get_next_line (const int fd, char **line)
{
	static char	*line_read;
	int			i;
	char		buff[BUFF_SIZE + 1];
	char		*temp;

	if (!line_read)
		line_read = ft_strnew(1);
	if (read(fd, buff, BUFF_SIZE) == -1)
		return (-1);
	while ((i = read(fd, buff, BUFF_SIZE)))
	{
		line_read = ft_strjoin(line_read, buff);
		if (ft_isnewline(buff) = 1 || i == 0)
			break;
	}
	*line = ft_strndup(line_read, ft_linecpy(line_read));
}


int     main(int ac, char **av)
{
   (void)ac;
   int     fd;
   int     i;
   int     ret;
   char    *line = NULL;

   i = 22;
   ret = 1;
   if ((fd = open(av[1],O_RDONLY)) == -1)
   {
       printf("could not open file\n");
       return (0);
   }
   while (i--)
   {
       ret = get_next_line(fd,&line);
       printf("%s",line);
       //free(line);
   }
   return (0);
}
