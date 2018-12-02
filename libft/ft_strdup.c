/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:00:31 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/02 23:01:13 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = (char*)malloc(sizeof(char) * (len + 1));
	ft_strcpy(res, src);
	return (res);
}
