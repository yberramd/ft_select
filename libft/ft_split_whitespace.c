/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:57:09 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/07 20:25:50 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		nbr_words(char const *s)
{
	int	i;
	int	nbr_w;
	int	a;

	a = 0;
	nbr_w = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\t' && a == 0)
		{
			nbr_w++;
			a = 1;
		}
		if (s[i] == ' ' || s[i] == '\t')
			a = 0;
		i++;
	}
	return (nbr_w);
}

static void		split(char **tab_s, char const *s, int nbr_w)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (j < nbr_w)
	{
		len = 0;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
		{
			i++;
			len++;
		}
		tab_s[j] = ft_strsub(s, i - len, len);
		j++;
	}
}

char			**ft_split_whitespace(char const *s)
{
	int		nbr_w;
	char	**tab_s;

	if (s == NULL)
		return (NULL);
	nbr_w = nbr_words(s);
	if (!(tab_s = (char**)malloc(sizeof(char*) * (nbr_w + 1))))
		return (NULL);
	tab_s[nbr_w] = NULL;
	split(tab_s, s, nbr_w);
	return (tab_s);
}
