/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:09:07 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/07 19:47:02 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#define MAX_DIGIT 310

static char	*dtoa(double nbr, char *str, int dp, int precision)
{
	int		i;
	double	nbr2;

	nbr2 = 0;
	i = 0;
	while (nbr > 0.0 && i < dp + 2 + precision)
	{
		nbr2 = (int)nbr;
		if (i == dp + 1)
		{
			str[i] = '.';
			i++;
		}
		str[i] = '0' + (char)nbr2;
		i++;
		nbr -= nbr2;
		nbr *= 10;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_dtoa(double nbr, int precision)
{
	double	i;
	char	*str;
	int		dp;

	i = 1;
	dp = 0;
	if (!(str = (char*)malloc(sizeof(char) * MAX_DIGIT)))
		return (NULL);
	while (nbr - (10 * i) >= 0)
	{
		i *= 10;
		dp++;
	}
	i = 0;
	while (dp - i > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	str = dtoa(nbr, str, dp, precision);
	return (str);
}
