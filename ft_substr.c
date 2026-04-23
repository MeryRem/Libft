/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:33:11 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/23 11:04:46 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*subc;
	size_t	a;
	size_t	i;
	
	if (!s)
		return (NULL);
	a = ft_strlen(s);
	i = 0;
	if (start >= a)
	{
		subc = (char *)malloc(1);
		subc[0] = '\0';
		return (subc);
	}
	subc = (char *)malloc((len + 1) * sizeof(char));
	if (!subc)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{	
		subc[i] = s[start + i];
		i++;
	}
	subc[i] = '\0';
	return (subc);
}
/*
#include <stdio.h>
int main(void)
{
	char *res;
	res = ft_substr("Hola mundo", 2, 4);
	printf("%s\n", res);
}*/
