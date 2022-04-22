/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:47:52 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/12 02:27:04 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_size(int nb)
{
	int	i;

	i = 1;
	while ((nb > 9 || nb < -9))
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	int_to_char(int n)
{
	char	c;

	if (n < 0)
	{
		n = n * -1;
	}
	c = 48 + n;
	return (c);
}

int	pot_base_10(int p)
{
	int	total;

	p = p - 1;
	total = 1;
	while (p--)
	{
		total = total * 10;
	}
	return (total);
}

void	ft_putnbr(int nb)
{
	char	c;
	int		size;
	int		pot;

	size = find_size(nb);
	pot = size;
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	pot = pot_base_10(size);
	while (pot > 0)
	{
		c = int_to_char(nb / pot);
		write(1, &c, 1);
		nb = nb % pot;
		pot = pot / 10;
	}
}
