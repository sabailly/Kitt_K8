#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	if (!s[start] || !s[start + len])
		return NULL;
	char * new = malloc(len);
	if (!new) 
		return NULL;
	i = 0;
	while(i < len) 
	{
		new[i] = s[start + i];
		i++;
	}
	return new;
}

