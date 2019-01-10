/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 06:44:43 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/01 23:20:20 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		q;
	char	*res;
	char	*str;

	if (!s || !f)
		return (NULL);
	q = 0;
	str = (char*)s;
	while (str[q])
		q++;
	res = (char*)malloc(sizeof(char) * (q + 1));
	if (res == NULL)
		return (NULL);
	res[q] = '\0';
	q = 0;
	while (str[q])
	{
		res[q] = f(str[q]);
		q++;
	}
	return (res);
}
