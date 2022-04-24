/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:35:32 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/20 22:36:30 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	t;

	t = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		t = t * nb;
		nb--;
	}
	return (t);
}
