/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:24:21 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/21 18:27:53 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char h[] = "hola";
	printf("%s", ft_strdup(h));
}
*/
