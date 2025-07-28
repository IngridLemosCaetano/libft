#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if(s == NULL || start > len)
		return (NULL);
	while (start >= (unsigned int)ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	substr = (char *)malloc(sizeof(char) * (len +1));
	if(substr == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++
	}
	substr[i] = '\0';
	return (substr);
}