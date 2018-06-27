#include "libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

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
       printf("%s\n",line);
       //free(line);
   }
   return (0);
}
