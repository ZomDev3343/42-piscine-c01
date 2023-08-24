/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:54:28 by truello           #+#    #+#             */
/*   Updated: 2023/08/23 22:01:17 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 42;
//	b = 43;
//	printf("a:%d", a);
//	ft_swap(&a, &b);
//	printf("a:%d", a);
//	ft_swap(&a, &b);
//	return (0);
//}