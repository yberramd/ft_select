/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:12:02 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/25 17:52:01 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_cpy_double(char ***dest, char **src)
{
	int i;

	i = 0;
	if (!src)
		return (-1);
	while (src[i])
		i++;
	if (!((*dest) = (char**)malloc(sizeof(char*) * (i + 1))))
		return (-1);
	while (i >= 0)
	{
		(*dest)[i] = NULL;
		i--;
	}
	i = 0;
	while (src[i])
	{
		if (!((*dest)[i] = ft_strdup(src[i])))
		{
			ft_strdel_double(dest);
			return (-1);
		}
		i++;
	}
	return (0);
}
