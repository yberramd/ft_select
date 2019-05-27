/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_double.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:28:51 by yberramd          #+#    #+#             */
/*   Updated: 2019/01/18 11:59:37 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_memalloc_double(char ***tab, int y, int x)
{
	int i;

	i = 0;
	if (!(*tab = (char**)malloc(sizeof(char*) * y)))
		exit(EXIT_FAILURE);
	while (i < y)
	{
		if (!((*tab)[i] = (char*)malloc(sizeof(char) * x)))
			exit(EXIT_FAILURE);
		i++;
	}
}
