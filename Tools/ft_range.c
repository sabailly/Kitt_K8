/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:26:56 by sarbaill          #+#    #+#             */
/*   Updated: 2018/11/21 00:57:13 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *mem;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(mem = (int*)malloc((max - min) * sizeof(int))))
		return (NULL);
	while (min < max)
	{
		mem[i] = min;
		i++;
		min++;
	}
	return (mem);
}
