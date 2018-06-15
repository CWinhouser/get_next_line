/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:26:58 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/29 08:38:37 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int 	i;
	int 	j;
	char	*str2;

	str2 = (char*)malloc(ft_strlen(str) * sizeof(char));
	i = ft_strlen(str);
	j = 0;
	while (i != 0 && str[i] != (char)c)
		i--;
	while (str[i] != 0)
	{
		str2[j] = str[i];
		i++;
		j++;
	}
	return (str2);
}
