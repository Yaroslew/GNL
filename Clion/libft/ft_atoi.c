/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 09:45:09 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/02 03:12:09 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		result(const char *s, int q, long int res, int neg)
{
	while (s[q] == 9 || s[q] == 10 || s[q] == 13 || s[q] == 11 ||
		s[q] == 12 || s[q] == 14 || s[q] == 32)
		q++;
	if ((s[q] == 45 || s[q] == 43) &&
		(s[q + 1] == 45 || s[q + 1] == 43))
		return (0);
	if (s[q] == '-' && s[q])
	{
		neg = -1;
		q++;
	}
	if (s[q] == '+')
		q++;
	while (s[q] >= 48 && s[q] <= 57)
	{
		if (res > (res * 10) + (s[q] - 48))
			return ((neg < 0) ? 0 : -1);
		res = (res * 10) + (s[q] - 48);
		q++;
	}
	return ((int)res * neg);
}

int				ft_atoi(const char *s)
{
	int			q;
	long int	res;
	int			neg;

	q = 0;
	res = 0;
	neg = 1;
	return (result(s, q, res, neg));
}
