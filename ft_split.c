/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:12:45 by ingrid            #+#    #+#             */
/*   Updated: 2025/07/31 09:30:46 by ingrid           ###   ########.fr       */
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
/*
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**new_ptr;
	int		s_len;

	s_len = (int)ft_strlen(s);
	new_ptr = (char **)malloc(s_len * size_of(char *));
	if (!new_ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c)
		{
			new_ptr[i][j] = s[i + 1];
			j++;
		}
		i++;
	}
	return (new_ptr);
}*/

int	main(void)
{
	const char	s[100] = "Hello, Ingrid";
	char	c = ' ';
	printf("%d\n", ft_count_words(s, c));
	return (0);
}
