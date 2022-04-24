/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:10:34 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/22 05:51:23 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	if (n == 0)
		return (0);
	if (n == 1)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	s = n - 1;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]) && i < s)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
