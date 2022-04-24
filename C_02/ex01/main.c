/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:17:00 by tairribe          #+#    #+#             */
/*   Updated: 2022/04/17 02:25:44 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "string";
	char	dest[5];

	char	*str;
	str = ft_strncpy(dest, src, 5);
	
	printf("str: %s\n", str);
	printf("dest: %s\n", dest);
}
