#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	new_str = malloc(ft_strlen(s1) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] != set[0])
		{
			new_str[j] = s1[i];
			j++;
		}
		i++;
	}	
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