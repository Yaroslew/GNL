/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:08:00 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/01/07 18:08:02 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_sort_alpha(char *arr)
{
	int		q;
	int		flag;
	char	temp;

	q = 0;
	flag = 0;
	while (arr[q])
	{
		if (arr[q] < arr[q + 1] && arr[q + 1])
		{
			temp = arr[q];
			arr[q] = arr[q + 1];
			arr[q + 1] = temp;
			flag++;
		}
		q++;
	}
	if (flag)
		ft_sort_alpha(arr);
	return (arr);
}
