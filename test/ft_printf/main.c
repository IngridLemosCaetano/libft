/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:02:20 by ingrid            #+#    #+#             */
/*   Updated: 2025/11/13 13:30:38 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	main(void)
{
	char c = 'S';
	ft_printf("***** Teste ft_printf *****\n\n");
	ft_printf("string: %s\nint: %d\nchar: %c\npercentage: %", "École 42", 42, c);
	ft_printf("\nunsigned: %u\nhexadecimal: %X\npointer: %p\n", 42, 255, &c);
	ft_printf("\n***** Fim do teste *****\n");
	return (0);
}
