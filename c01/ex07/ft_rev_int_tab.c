/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:50:43 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/19 02:24:01 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	tmp;

	n = size - 1;
	i = 0;
	while (i < n)
	{
		tmp = tab[i];
		tab[i] = tab[n]; 
		tab[n] = tmp;
		i++;
		n--;
	}
}

// 0 1 2 3 4 5  tmp = 7
// 7 8 9 6 5 5
// 5 5 6 9 8 7