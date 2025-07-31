/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:12:45 by ingrid            #+#    #+#             */
/*   Updated: 2025/07/31 17:06:20 by ilemos-c         ###   ########.fr       */
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

	i = 0;
	j = 0;
	words = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
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
	const char	s[100] = "-Hello--Ingrid-a--";
	char	c = ' ';
	char	**ptr = ft_split(s, c);
	int	i = 0;
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}*/
