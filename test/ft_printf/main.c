/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 22:42:48 by ingrid            #+#    #+#             */
/*   Updated: 2026/06/15 22:42:54 by ingrid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char c = 'S';
	ft_printf("***** Teste ft_printf *****\n\n");
	ft_printf("string: %s\nint: %d\nchar: %c\npercentage: %", "École 42", 42, c);
	ft_printf("\nunsigned: %u\nhexadecimal: %X\npointer: %p\n", 42, 255, &c);
	ft_printf("\n***** Fim do teste *****\n");
	return (0);
}
