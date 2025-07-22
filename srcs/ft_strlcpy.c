/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:40:47 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/22 18:31:28 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size < 0)
		while (src[i] != '\0' && i < (size - 1))
			dst[i] = src[i];
			i++;
		return ('\0');
}

int	main(void)
{
	char dst[10];
	const char *src = "Ingrid";
	size_t size = 3;

	printf("%ld",ft_strlcpy(dst, src, size));
	return (0);
}
