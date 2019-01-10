/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 06:54:39 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/01 23:21:00 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		q;
	char	*res;
	char	*str;

	if (!s || !f)
		return (NULL);
	q = 0;
	str = (char*)s;
	while (s[q])
		q++;
	res = (char*)malloc(sizeof(char) * (q + 1));
	if (res == NULL)
		return (NULL);
	res[q] = '\0';
	q = 0;
	while (str[q])
	{
		res[q] = f(q, str[q]);
		q++;
	}
	return (res);
}
