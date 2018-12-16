#include "libft.h"

void	*ft_strclr(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		str[i] = '\0';
	}
}
