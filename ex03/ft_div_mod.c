/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:05:54 by truello           #+#    #+#             */
/*   Updated: 2023/08/24 14:46:03 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//int	main(void)
//{
//	int	div;
//	int	mod;
//
//	ft_div_mod(5, 6, &div, &mod);
//	printf("A: 5, B: 6, Div: %d, Mod : %d", div, mod);
//	return (0);
//}
