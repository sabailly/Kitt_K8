
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL) ;
	new = malloc(strlen(s));
	while (s[i])
	{
		new[i] = f(i, *s);
		i++;
		s++;
	}
	return (new);
}
