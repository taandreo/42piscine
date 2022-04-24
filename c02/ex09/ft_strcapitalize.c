/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 05:47:28 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/20 21:40:04 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] -= 32;
			}
			else if (!(is_alphanum(str[i - 1])))
			{
				str[i] -= 32;
			}
		}
		else if (i != 0 && str[i] >= 'A' && str[i] <= 'Z' )
		{
			if ((is_alphanum(str[i - 1])))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
