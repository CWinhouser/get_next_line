/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:50:49 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 13:47:03 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (((unsigned char*)s)[i] != (unsigned char)c && i < n)
		i++;
	if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void*)s + i);
	return(NULL);
}
