/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:58:19 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 13:43:11 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (needle[0] == '\0')
		return((char*)haystack);
	while (haystack[i] != '\0' && i <= len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j <= len)
		{
			if (needle[j + 1] == '\0')
				return((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
