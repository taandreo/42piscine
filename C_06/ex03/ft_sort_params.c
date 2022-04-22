/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:24:53 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/22 17:27:51 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	params[10000];

	i = argc;
	j = 0;
	while (j++ < argc - 1)
		params[j] = j;
	while (i--)
	{
		j = 1;
		while (j < i)
		{
			if (ft_strcmp(argv[params[j]], argv[params[j + 1]]) > 0)
				ft_swap(&params[j], &params[j + 1]);
			j++;
		}
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[params[j]]);
		write(1, "\n", 1);
		j++;
	}
}
