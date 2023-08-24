/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:34:45 by truello           #+#    #+#             */
/*   Updated: 2023/08/24 14:42:59 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	loop_limit;
	int	tmp;

	counter = 0;
	loop_limit = 0;
	tmp = 0;
	loop_limit = size / 2 - 1;
	while (counter <= loop_limit)
	{
		tmp = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = tmp;
		counter++;
	}
}
//int	main()
//{
//	int	i;
//	const int	t_size = 4;
//	int	tab[4] = {2, 1, 5, 6};
//
//	i = 0;
//	while (i < t_size)
//	{
//		printf("%d ", tab[i]);
//		i++;
//	}
//	printf("\n");
//	ft_rev_int_tab(tab, t_size);
//	i = 0;
//	while (i < t_size)
//	{
//		printf("%d ", tab[i]);
//		i++;
//	}
//	return (0);
//}
