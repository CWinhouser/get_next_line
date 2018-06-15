/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:12:19 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/29 15:07:34 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_intlen(n);
	if (!(str = (char*)malloc(sizeof(*str) * i)))
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		n = -n;
		if (n == 0)
			str = "0";
		while (i != 0)
		{
			i--;
			str[i] = n % 10 + '0';
			n = n / 10;
		}
		str[i] = '-';
	}
		else while (i != -1)
		{
			--i;
			str[i] = n % 10 + '0';
			n = n / 10;
		}
	return (str);
}
