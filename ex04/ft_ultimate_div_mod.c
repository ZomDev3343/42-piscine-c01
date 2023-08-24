/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:15:19 by truello           #+#    #+#             */
/*   Updated: 2023/08/24 09:29:54 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}
//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 13;
//	b = 6;
//	printf("A: 6, B: 13");
//	ft_ultimate_div_mod(&a, &b);
//	printf("A: %d, B: %d", a, b);
//	return (0);
//}
