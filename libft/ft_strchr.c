#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/* int main(void)
{
	const char str[] = "Hola, mundo";
	int c = '\0';
	char *res = ft_strchr(str, c);
	if (res != NULL)
		printf("%s", res);
	else
		printf("No se encontro el caracter");
	return (0);
}  */