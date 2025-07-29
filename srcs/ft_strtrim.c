/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:24:50 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/29 16:03:29 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	new_str = malloc(ft_strlen((char *)s1) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		if (!ft_is_in_set(s1[i], set))
		{
			new_str[j] = s1[i];
			j++;
		}
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}

int	main(void)
{
	char const	*s1 = "Bondoso";
	char const	*set = "oso";
	char	*new_str;
	new_str = ft_strtrim(s1, set);
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
