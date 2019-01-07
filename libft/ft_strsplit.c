/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 18:03:28 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/03 18:20:23 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int		word_nbr;
	int		i;

	word_nbr = 0;
	i = 0;
	while (s && *s)
	{
		if (*s != c && (s[1] == c || s[1] == 0))
			word_nbr++;
		s++;
	}
	return (word_nbr);
}

static int	ft_letter_count(const char *s, int i, char c)
{
	int		letter_nbr;

	letter_nbr = 0;
	while (s[i + letter_nbr] && (s[i + letter_nbr] != c))
		letter_nbr++;
	return (letter_nbr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		wd;
	int		word_len;
	int		word;
	int		i;

	wd = ft_word_count(s, c);
	if (!s)
		return (NULL);
	t = (char**)(malloc(sizeof(char*) * (wd + 1)));
	if (!t)
		return (NULL);
	t[wd] = NULL;
	word = 0;
	i = 0;
	while (word < wd)
	{
		while (s[i] == c)
			i++;
		word_len = ft_letter_count(s, i, c);
		t[word] = ft_strsub(s, i, word_len);
		word++;
		i = i + word_len;
	}
	return (t);
}
