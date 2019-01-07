/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 17:21:16 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/31 17:23:43 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = len - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(new = malloc(sizeof(char) * (j - i))))
		return (NULL);
	k = 0;
	while (i <= j)
	{
		new[k] = s[i];
		i++;
		k++;
	}
	return (new);
}
