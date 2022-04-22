/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 05:53:46 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/22 16:43:38 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	s_size;
	unsigned int	d_size;

	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	i = d_size;
	c = 0;
	if (size == 0 || size <= d_size)
		return (s_size + size);
	while (src[c] != '\0' && c < (size - d_size - 1))
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (d_size + s_size);
}
