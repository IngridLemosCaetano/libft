/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:03:17 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/29 20:59:11 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;
	size_t	src_length;

	i = 0;
	j = 0;
	dst_length = 0;
	src_length = 0;
	while (dst[dst_length])
		dst_length++;
	while (src[src_length])
		src_length++;
	if (size == 0)
		return (size + src_length);
	i = dst_length;
	while (src[j] && (i < size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_length + src_length);
}
/*
int main(void)
{
	char dst[10] = "Hello ";
	const char *src = "World";
	size_t size = ft_strlcat(dst, src, sizeof(dst));
	printf("dst: %s\n", dst);
	printf("Return: %zu\n", size);
	return (0);
}*/
