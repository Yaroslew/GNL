/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 05:53:50 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/07 12:33:28 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**check(char **res)
{
	int			q;

	q = 0;
	while (res[q])
	{
		if (res[q] == NULL && res[q + 1])
		{
			q = 0;
			while (res[q])
			{
				free(res[q]);
				q++;
			}
			free(*res);
			res = NULL;
			return (res);
		}
		q++;
	}
	return (res);
}

static char		**record(char const *s, char c, char **res)
{
	int			words;
	int			q;
	int			r;

	words = 0;
	q = 0;
	r = 0;
	while (s[q])
	{
		while (s[q] != c && s[q])
		{
			res[words][r] = s[q];
			q++;
			r++;
		}
		if (r)
		{
			res[words][r] = '\0';
			r = 0;
			words++;
		}
		if (s[q])
			q++;
	}
	return (check(res));
}

static char		**count_char(char const *s, char c, char **res)
{
	int			q;
	int			coun;
	int			words;

	q = 0;
	words = 0;
	coun = 0;
	while (s[q])
	{
		while (s[q] != c && s[q])
		{
			coun++;
			q++;
		}
		if (coun)
		{
			if (!(res[words] = (char*)malloc(sizeof(char) * (coun + 1))))
				return (NULL);
			words++;
			coun = 0;
		}
		if (s[q])
			q++;
	}
	return (record(s, c, res));
}

static char		**count_words(char const *s, char c)
{
	int			q;
	int			coun_wor;
	char		**res;

	q = 0;
	coun_wor = 0;
	while (s[q])
	{
		if (s[q] != c && (s[q + 1] == c || !s[q + 1]))
			coun_wor++;
		q++;
	}
	if (!(res = (char**)malloc(sizeof(char*) * (coun_wor + 1))))
		return (NULL);
	res[coun_wor] = NULL;
	if (coun_wor == 0)
		return (res);
	count_char(s, c, res);
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;

	if (!s)
		return (NULL);
	res = count_words(s, c);
	return (res);
}
