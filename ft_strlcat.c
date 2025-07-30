/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:03:17 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/30 11:54:39 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	i = 0;
	dst_length = 0;
	src_length = 0;
	while (dst[dst_length] && dst_length < size)
		dst_length++;
	while (src[src_length])
		src_length++;
	if (dst_length == size)
		return (size + src_length);
	while (src[i] && (dst_length + i + 1 < size))
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	if (dst_length + i < size)
		dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}
/*
int main(void)
{
	char dst[20] = "Hello";
	const char *src = "World";
	size_t size = ft_strlcat(dst, src, sizeof(dst));
	printf("dst: %s\n", dst);
	printf("Return: %zu\n", size);
	return (0);
}*/
