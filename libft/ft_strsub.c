/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:27:00 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 13:41:04 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char 	*new;
	size_t	i;

	i = ft_strlen(str);
	if (!str || !(new = (char *) malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > i)
		return (NULL);
	i = 0;
	while (i < len && str[start] != '\0')
	{
		new[i] = str[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
