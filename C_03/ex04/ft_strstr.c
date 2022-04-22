/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 02:56:16 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/22 15:10:18 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		k = i;
		while (to_find[c] == str[k] && str[k] != '\0')
		{
			c++;
			k++;
		}
		if (to_find[c] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
