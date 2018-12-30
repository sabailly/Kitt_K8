#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int		word_nbr;
	int		i;

	word_nbr = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && (s[i] != c))
				i++;
			word_nbr++;
		}
	}
	return (word_nbr);
}

static int ft_letter_count(const char *s, int i, char c)
{
	int		letter_nbr;

	letter_nbr = 0;
	while (s[i + letter_nbr] && (s[i + letter_nbr] != c))
		letter_nbr++;
	return (letter_nbr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		word;
	int		i;

	t = (char**)(malloc(sizeof(char*) * ft_word_count(s, c)));
	if (!t)
		return (NULL);
	word = 0;
	i = 0;
	while (word < ft_word_count(s, c))
	{
		while(s[i] == c)
			i++;
		t[word] = ft_strsub(s, i, ft_letter_count(s, i, c));
		word++;
		i = i + ft_letter_count(s, i, c) + 1;
	}
	return (t);
}