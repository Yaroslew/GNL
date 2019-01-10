/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 08:47:38 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/01 23:26:01 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	q;
	size_t	r;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	q = 0;
	r = 0;
	while (s1[q])
		q++;
	while (s2[r])
		r++;
	res = (char*)malloc(sizeof(res) * (q + r + 1));
	if (res == NULL)
		return (NULL);
	res[q + r + 1] = '\0';
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	return (res);
}
