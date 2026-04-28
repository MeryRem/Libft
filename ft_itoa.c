/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:39:18 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/28 11:46:53 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digits_count(int n)
{
	int count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	len = digits_count(n);
	num = (long)n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (num < 0)
	{	
		str[0] = '-';
		num = num * (-1);
	}
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num/10;
		len --;
	}
	return (str);	
}
/*
#include <stdio.h>
int	main (void)
{
	printf("%s", ft_itoa(-2147483648));
}
*/
