/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:52:26 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/25 20:42:35 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_add_double(char ***tab, char *str)
{
	char	**tmp;
	int		i;

	i = 0;
	if (((*tab) == NULL || str == NULL))
		return (NULL);
	while ((*tab)[i])
		i++;
	if (!(tmp = (char**)malloc(sizeof(char*) * (i + 2))))
		return (NULL);
	ft_init_tab(tmp, (i + 2));
	i = 0;
	while ((*tab)[i])
	{
		if (!(tmp[i] = ft_strdup((*tab)[i])))
			return (NULL);
		i++;
	}
	if (!(tmp[i] = ft_strdup(str)))
		return (NULL);
	ft_strdel_double(&(*tab));
	return (tmp);
}
