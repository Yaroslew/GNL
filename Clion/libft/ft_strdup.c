/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:54:57 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/31 12:35:52 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	int		q;
	char	*res;

	q = ft_strlen(str);
	res = (char*)malloc(sizeof(char) * (q + 1));
	if (res == NULL)
		return (NULL);
	q = 0;
	while (str[q])
	{
		res[q] = str[q];
		q++;
	}
	res[q] = '\0';
	return (res);
}
