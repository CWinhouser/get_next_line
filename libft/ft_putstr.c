/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:40:21 by ktwomey           #+#    #+#             */
/*   Updated: 2018/06/05 14:35:26 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
