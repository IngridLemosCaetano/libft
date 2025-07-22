/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:33:41 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/22 15:21:22 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0')
		return ('\0');
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "Ingrid";
	int c = 'm';

	char *ptr = ft_strchr(s, c);
	if (ptr != NULL)
		printf("Caracter encontrado: %s.", ptr);
	else
		printf("Caracter não encontrado");
	return (0);
}*/
