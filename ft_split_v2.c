/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:44:56 by ingrid            #+#    #+#             */
/*   Updated: 2025/08/05 19:23:58 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

void	ft_free_words(char **words, int n)
{
	while (--n >= 0)
		free(words[n]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**words;

	words = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!s || !words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			words[j] = ft_substr(s, start, i - start);
			if (!words[j])
				return (ft_free_words(words, j), NULL);
			j++;
		}
		else
			i++;
	}
	return (words[j] = NULL, words);
}
/*
int	main(void)
{
	const char	s[100] = "      split       this for   me  !       ";
	char		c = ' ';
	char		**ptr = ft_split(s, c);
	int			i = 0;
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}*/
