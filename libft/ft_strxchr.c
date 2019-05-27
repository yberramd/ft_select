/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 12:51:10 by yberramd          #+#    #+#             */
/*   Updated: 2018/12/10 13:07:37 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strxchr(const char *s, int c, int x)
{
	int		i;
	char	*s1;

	i = 1;
	s1 = ft_strchr(s, c);
	if (i < x)
		while ((s1 = ft_strchr(s1, c)) != NULL && i < x)
			i++;
	return (s1);
}
