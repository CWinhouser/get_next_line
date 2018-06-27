/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 08:06:08 by ktwomey           #+#    #+#             */
/*   Updated: 2018/06/27 09:27:30 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static int			ft_line(char **line, char **line_read, int fd)
{
	 char	*temp;
	 int	n;

	 n = 0;
	 while(line_read[fd][n] != '\n' && line_read[fd][n])
		 n++;
	 if(line_read[fd][n] == '\n')
	 {
		 *line = ft_strsub(line_read[fd], 0 , n);
		 temp = ft_strdup(line_read[fd] + n + 1);
		 ft_strdel(&line_read[fd]);
		 line_read = &temp;
		 if(line_read[fd][0] == '\0')
			 ft_strdel(&line_read[fd]);
	 }
	 else if(line_read[fd] == '\0')
	 {
		 *line = ft_strdup(line_read[fd]);
		 ft_strdel(&line_read[fd]);
	 }
	 return (1);
}

int					get_next_line (const int fd, char **line)
{
	static char	*line_read[0];
	int			i;
	char		buff[BUFF_SIZE + 1];
//	char		*temp;

	i = 0;
/*	if(!line_read[fd])
		line_read[fd] = ft_strnew(0);
*/	while (((i = read(fd, buff, BUFF_SIZE)) > 0))
	{
		if(!line_read[fd])
			line_read[fd] = ft_strnew(0);
		buff[i] = '\0';
		line_read[fd] = ft_strjoin(line_read[fd], buff);
		printf("%s", line_read[fd]);
		//printf("%d\n", i);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	//printf("%d\n", i);
	if (i < 0)
		return (-1);
	if ((i ==  0) && (line_read[fd] == NULL || line_read[fd][0] == '\0'))
		return (0);
	//printf ("%s", *line_read);
	return(ft_line(line, line_read, fd));
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
       //printf("%s\n",line);
       //free(line);
   }
   return (0);
}
