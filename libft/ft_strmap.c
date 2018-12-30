#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL) ;
	new = malloc(strlen(s));
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
