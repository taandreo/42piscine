/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:43:22 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/08 01:01:33 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	p1;
	char	p2;
	char	p3;

	p1 = '0';
	while (p1 <= '7')
	{
		p2 = p1 + 1;
		while (p2 <= '8')
		{
			p3 = p2 + 1;
			while (p3 <= '9')
			{
				print_char(p1, p2, p3);
				p3 ++;
			}
			p2 ++;
		}
		p1 ++;
	}	
}
