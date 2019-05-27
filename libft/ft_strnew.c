/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:09:15 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/10 14:52:41 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}
