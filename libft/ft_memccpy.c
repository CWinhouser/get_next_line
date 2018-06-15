/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:08:00 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 13:47:23 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t 	i;
	char	*dst;
	char	*source;

	dst = dest;
	source = src;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		if (i > 0 && source[i] == (unsigned char)c)
		{
			return(dest);
		}
		i++;
	}
	return (NULL);
}
