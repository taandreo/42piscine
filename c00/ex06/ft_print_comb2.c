/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:50:46 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/18 15:26:33 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char p0, char p1, char p2, char p3)
{
	write(1, &p0, 1);
	write(1, &p1, 1);
	write(1, " ", 1);
	write(1, &p2, 1);
	write(1, &p3, 1);
	if (!(p0 == '9' && p1 == '8' && p2 == '9' && p3 == '9'))
	{
		write(1, ", ", 2);
	}
}

void	add_char(int n0, int n1)
{
	char	p0;	
	char	p1;
	char	p2;
	char	p3;

	p0 = (n0 / 10) + '0'; // 33 / 10  = 3 -> 3 + 48 -> 51
	p1 = (n0 % 10) + '0'; // 33 % 10  = 2 -> 
	p2 = (n1 / 10) + '0'; // 45 / 10  = 4
	p3 = (n1 % 10) + '0'; // 45 % 10  = 5
	print_char(p0, p1, p2, p3);
}

void	ft_print_comb2(void)
{
	int	n0;
	int	n1;

	n0 = 0;  //32
	while (n0 <= 98)
	{
		n1 = n0 + 1; //45
		while (n1 <= 99)
		{
			add_char(n0, n1);
			n1 ++;
		}
		n0 ++;
	}
}
