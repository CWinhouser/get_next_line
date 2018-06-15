/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:40:38 by ktwomey           #+#    #+#             */
/*   Updated: 2018/05/25 08:57:51 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *dup;

	dup = (char*)malloc(ft_strlen((str) + 1) * sizeof(char));
	dup = ft_strcpy(dup, (char*)str);
	return (dup);
}
