/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:08:06 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/04 17:25:15 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char*)s1;
	str2 = (char*)s2;
	while((str1[i] != n || str2[i] != n) && i < n)
	{
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
