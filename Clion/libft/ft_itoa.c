/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 12:54:32 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/02 03:01:11 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*result(int n)
{
	int		len;
	char	*res;
	int		save;
	int		neg;

	save = n;
	len = (n < 0) ? 1 : 0;
	neg = (len == 1) ? 1 : 0;
	if (neg)
		n *= -1;
	while (save /= 10)
		len++;
	len++;
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len--] = '\0';
	while (len >= neg)
	{
		if (neg)
			res[0] = '-';
		res[len] = ((unsigned int)n % 10) + '0';
		n /= 10;
		len--;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (!n)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (result(n));
}
