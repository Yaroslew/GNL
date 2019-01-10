/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 07:34:27 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/01 23:29:59 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	ind;

	if (!s)
		return (NULL);
	ind = 0;
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[ind] == ' ' || s[ind] == '\t' || s[ind] == '\n')
		ind++;
	if (len < ind)
		len = 0;
	else
		len = len - ind;
	return (ft_strsub(s, ind, len));
}
