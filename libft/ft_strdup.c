/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:00:31 by sarbaill          #+#    #+#             */
/*   Updated: 2018/11/29 19:47:52 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
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
