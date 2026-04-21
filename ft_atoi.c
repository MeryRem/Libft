/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:18:44 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/21 17:47:25 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	n;

	i = 0;
	res = 0;
	n = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n = 1;
		}
		i++;
	}
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		res = res *10 + (str[i] - '0');
		i++
		;
	}
	if (n == 1)
	{
		res = res * (-1);
	}
	return (res);
}
/*
#include <stdio.h>
int	main (void)
{
	char	st[] = "   +342229";
	printf("%d ", ft_atoi(st));
}
*/
