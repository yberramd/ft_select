/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:58:29 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/07 19:49:28 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		split(char **tab_s, char c, char const *s, int nbr_w)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (j <= nbr_w)
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		tab_s[j] = ft_strsub(s, i - len, len);
		j++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	int		nbr_w;
	char	**tab_s;

	if (s == NULL)
		return (NULL);
	nbr_w = ft_nbr_w(s, c);
	if (!(tab_s = (char**)malloc(sizeof(char*) * (nbr_w + 1))))
		return (NULL);
	tab_s[nbr_w--] = NULL;
	split(tab_s, c, s, nbr_w);
	return (tab_s);
}
