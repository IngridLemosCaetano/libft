#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new_str;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	while (s1[i])
	{
		if (s1[i] == set[0])
			i++;
		else
		{
            new_str[j] = s1[i];
            i++;
            j++;
		}
	}	
	while (new_str[x])
		x++;
	new_str = (char *)malloc(x +1);
	if (!new_str)
		return (NULL);
	new_str[j] = '\0';
	return(new_str);
}

int	main(void)
{
	char const	*s1 = "Bondoso";
	char const	*set = "o";
	char	*new_str;
	new_str = ft_strtrim(s1, set);
	printf("%s", new_str);
	return (0);
}