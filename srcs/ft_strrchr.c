#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (s[i] >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}
/*
int	main(void)
{
	const char *s = "Ingrid";
	int c = 'm';

	char *ptr = ft_strrchr(s, c);
	if (ptr != NULL)
		printf("Caracter encontrado: %s.", ptr);
	else
		printf("Caracter não encontrado");
	return (0);
}*/