/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:06:14 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 08:23:03 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char *str;

	str = (char*)malloc(n * sizeof(char));
	if (!str)
		return (NULL);
	ft_strclr(str);
	return(str);
}
