/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:33:41 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/08/08 19:27:05 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "Ingrid";
	int c = 'n';

	char *ptr = ft_strchr(s, c);
	if (ptr != NULL)
	{
		printf("Caracter encontrado: %c.\n", *ptr);
		printf("String: %s.\n", ptr);
	}
	else
		printf("Caracter não encontrado.\n");
	return (0);
}*/
