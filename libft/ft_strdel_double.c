/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 09:21:35 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/25 20:43:40 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_strdel_double(char ***tab)
{
	int i;

	i = 0;
	if ((*tab))
	{
		while ((*tab)[i] != NULL)
			ft_strdel(&(*tab)[i++]);
		free(*tab);
	}
}
