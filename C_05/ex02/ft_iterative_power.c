/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:39:25 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/20 22:40:31 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	t;

	t = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
	{
		t = nb * t;
	}
	return (t);
}
