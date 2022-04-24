/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:50:19 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/10 15:34:59 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int length, char start, char mid, char end)
{
	int		mid_control;

	if (length >= 1)
		ft_putchar(start);
	if (length >= 3)
	{
		mid_control = length - 2;
		while (mid_control--)
		{
			ft_putchar(mid);
		}
	}
	if (length >= 2)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		mid_control;

	if (y >= 1)
		print_line(x, 'A', 'B', 'C');
	if (y >= 3)
	{
		mid_control = y - 2;
		while (mid_control--)
		{
			print_line(x, 'B', ' ', 'B');
		}
	}
	if (y >= 2)
		print_line(x, 'A', 'B', 'C');
}
