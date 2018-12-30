#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	nbchar;
	int		ncpy;
	char	*res;

	nbchar = 0;
	if (n < 0)
		nbchar++;
	ncpy = n;
	while (ncpy != 0) {
		ncpy = ncpy / 10;
		nbchar++;
	}
	if (!(res = malloc(nbchar)))
		return (NULL);
	if (n < 0){
		res[0] = '-';
		n = -n;
	}
	nbchar--;
	while (n != 0) {
		res[nbchar] = (char)((n % 10) + 48);
		n = n / 10;
		nbchar--;
	}
	return (res);
}
