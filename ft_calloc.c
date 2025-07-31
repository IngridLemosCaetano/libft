/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:26:36 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/31 11:28:30 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, (nelem * elsize));
	return (ptr);
}
/*
int	main(void)
{
	int	*arr;
	size_t i = 0;
	size_t j = 10;

	arr = (int *)ft_calloc(j, sizeof(int));
	if (arr == NULL)
		printf("Erro na alocação de memória!\n");
	printf("Valores após alocação e zeragem:\n");
	while (i < j)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/
