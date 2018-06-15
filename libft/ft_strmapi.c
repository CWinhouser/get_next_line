/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:35:06 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/31 13:39:34 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	int 	i;
	char	*new;

	i = 0;
	if (!str || !f)
		return(NULL);
	new = (char*)malloc(sizeof(char) * (ft_strlen((char*)str) + 1));
	while (str[i])
	{
		new[i] = f(i, (char)str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
