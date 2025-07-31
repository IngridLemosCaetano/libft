/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:12:45 by ingrid            #+#    #+#             */
/*   Updated: 2025/07/31 16:27:14 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	else
	{
		while (s[i])
		{
			if (s[i] != c && (i == 0 || s[i - 1] == c))
				count++;
			i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;
	char			**words;
	unsigned int	count_words;

	i = 0;
	j = 0;
	count_words = ft_count_words(s, c);
	words = malloc(sizeof(char *) * (count_words + 1));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			words[j] = ft_substr(s, start, (i - start));
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}
/*
int	main(void)
{
	//const char	s[100] = "-Hello--Ingrid-a";
	char	c = '-';
	//printf("%d\n", ft_count_words(s, c));
	const char	s[100] = "-Hello--Ingrid-a";
	char	**ptr = ft_split(s, c);
	printf("%s", ptr[2]);
	return (0);
}*/
