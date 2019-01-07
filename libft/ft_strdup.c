/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:00:31 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/04 19:46:40 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcpy(res, (char *)src);
	return (res);
}
