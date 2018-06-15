/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:03:07 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/29 08:32:34 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*str2;

	str2 = (char*)malloc(ft_strlen(str) * sizeof(char));
	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] != (char)c)
	{
		i++;
	}
	while (str[i] != '\0')
	{
		str2[j] = (str[i]);
		i++;
		j++;
	}
	return (str2);
}
