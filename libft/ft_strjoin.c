/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 09:06:35 by ktwomey           #+#    #+#             */
/*   Updated: 2018/06/23 13:27:24 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char *ret;

	if (!str1 || !str2)
		return (NULL);
	ret = ft_strnew(ft_strlen((char *)str1) + ft_strlen((char *)str2));
	if (!ret)
		return (NULL);
	ret = ft_strcpy(ret, str1);
	ret = ft_strcat(ret, str2);
	return (ret);
}
