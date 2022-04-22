/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:10:49 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/22 04:27:00 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}
