/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:26:36 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/24 15:21:17 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*ptr;

	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, (nelem * elsize));
	return (ptr);
}
/*
int	main(void)
{
	int	*arr;
	size_t i;

	arr = (int *)ft_calloc(10, sizeof(int));
	if (arr == NULL)
		printf("Erro na alocação de memória!\n");
	printf("Valores após alocação e zeragem:\n");
	i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/
