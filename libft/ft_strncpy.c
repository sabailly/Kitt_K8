/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:43:04 by sarbaill          #+#    #+#             */
/*   Updated: 2018/11/26 19:44:30 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char*	ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	 i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
