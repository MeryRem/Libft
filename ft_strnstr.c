#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	aux;
	size_t	aux2;
	
	aux = 0;
	aux2 = 0;
	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < size)
	{
		aux = i; //aux empieza en la pos actual de big
		aux2 = 0;
		//compara letra por letra, y mientras no pase del limite
		while ((aux < size) && big[aux] == little[aux2])
		{
			if (little[aux2 + 1] == '\0')
				return ((char *)&big[i]);
			aux++;
			aux2++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char b[10] = "hola mundo";
	char l[4] = "mun\0";
	size_t n = 10;
	printf("%s\n", ft_strnstr(b, l, n));
}
*/
