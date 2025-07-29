/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:22:39 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/29 14:37:43 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;
	unsigned int	size;

	i = 0;
	if (s == NULL || start > len)
		return (NULL);
	size = (unsigned int)ft_strlen((char *)s);
	while (start >= size)
		return (ft_calloc(1, sizeof(char)));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char	*str = "Escola 42 São Paulo";
	char	*substr;

	substr = ft_substr(str, 7, 13);
	if (substr)
	{
		printf("Substring: \"%s\"\n", substr);
		free(substr);
	}
	else
	{
		printf("Erro ao gerar substring.\n");
	}
	return (0);
}*/
