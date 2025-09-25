#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
    int		i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (0);
}

/* int main(void)
{
    const char str[] = "abcde";
    int c = 'x';
    char *res = ft_strrchr(str, c);
    if (res != NULL)
        printf("%s", res);
    else
        printf("No se encontro el caracter");
    return (0);
}  */