/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:08:17 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/17 22:16:59 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_mt(int m[4][4]);
void	error(void);
int		ft_strlen(char *str);
int		gen_list_param(char *str, int *mt);
void	zero_mt(int (*m)[4]);

int	main(int argc, char *argv[])
{
	int	mt[4][4];
	int	err;
	int	params[16];

	if (argc != 2)
	{
		error();
		return (1);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		error();
		return (1);
	}
	err = gen_list_param(argv[1], params);
	if (err == -1)
	{
		error();
		return (1);
	}	
	zero_mt(mt);
	print_mt(mt);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	print_mt(int m[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = m[i][j] + '0';
			if (j < 3)
			{
				write(1, &c, 1);
				write(1, " ", 1);
			}
			if (j == 3)
			{
				write(1, &c, 1);
				write(1, "\n", 1);
			}
			j++;
		}
		i++;
	}
}

int	gen_list_param(char *str, int *mt)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			continue ;
		}
		if (str[i] >= '1' && str[i] <= '4')
		{
			mt[c] = str[i] - '0';
			c++;
		}
		else
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
