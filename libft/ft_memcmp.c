/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:59:54 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 13:46:37 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *vo1, const void *vo2, size_t n)
{
	int				v;
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)vo1;
	str2 = (unsigned char*)vo2;
	i = 0;
	while (i < n)
	{
		if(str1[i] != str2[i])
		{
			v = str1[i] - str2[i];
		}
		i++;
	}
	return (v);
}
