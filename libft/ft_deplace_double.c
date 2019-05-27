/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deplace_double.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 18:06:40 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/25 20:20:51 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_deplace_double(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tab == NULL)
		return (-1);
	while (tab[i + 1])
	{
		ft_strdel(&tab[i]);
		if (!(tab[i] = ft_strdup(tab[i + 1])))
			return (-1);
		i++;
	}
	ft_strdel(&tab[i]);
	tab[i] = NULL;
	return (0);
}
