/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 06:34:40 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/18 14:39:15 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	gen_hexa(char c)
{
	char	h;

	h = 0;
	if (c > 9)
	{
		h = 'a' + (c - 10);
	}
	else
	{
		h = '0' + c;
	}
	return (h);
}

void	print_hexa(unsigned char c)
{
	char	h;

	write(1, "\\", 1);
	if (c > 15)
	{
		h = gen_hexa(c / 16);
		write(1, &h, 1);
		h = gen_hexa(c % 16);
		write(1, &h, 1);
	}
	else
	{
		write(1, "0", 1);
		h = gen_hexa(c);
		write(1, &h, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			if (str[i] < 0)
			{
				print_hexa((unsigned char) str[i]);
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
