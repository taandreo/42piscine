/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:23:41 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/20 17:34:29 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_size(long nb, long base)
{
	int	i;

	i = 0;
	while (nb > (base -1))
	{
		i++;
		nb = nb / base;
	}
	return (i);
}

long	pot_base(int p, long base)
{
	long	total;

	total = 1;
	while (p--)
	{
		total = total * base;
	}
	return (total);
}

long	get_base(char *base)
{
	long	i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if (!(base[i] >= ' ' && base[i] <= '~'))
			return (-1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (-1);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	ibase;
	int		size;
	long	pot;
	int		sign;
	long	lnbr;

	ibase = get_base(base);
	if (ibase == -1)
		return ;
	lnbr = (long) nbr;
	if (lnbr < 0)
	{
		sign = -1;
		lnbr = lnbr * -1;
	}
	size = find_size(lnbr, ibase);
	pot = pot_base(size, ibase);
	if (sign == -1)
		write(1, "-", 1);
	while (pot > 0)
	{
		write(1, &base[lnbr / pot], 1);
		lnbr = lnbr % pot;
		pot = pot / ibase;
	}
}
