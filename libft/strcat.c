/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:02:46 by sarbaill          #+#    #+#             */
/*   Updated: 2018/11/30 16:39:36 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int offset;

	i = 0;
	offset = 0;
	while (dest[offset])
		offset++;
	while (src[i])
	{
		dest[offset +i] = src[i];
		i++;
	}
	dest[offset + i] = '\0';
	return (dest);
}
