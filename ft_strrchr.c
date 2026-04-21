/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:24:05 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/21 11:16:57 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
char	*ft_strrchr(char *s, int c)
{
	char	*x;

	while (*s)
	{
		if (*s == (char)c)
		{
			x = s;
		}
		s++;
	}
	if (*s == '\0')
		return (NULL);	
	return (x);
}
/*
int	main(void)
{
	char s[13] = "hola me llamo";
	int	c = 108;
	printf("%s ", ft_strrchr(s, c));
}
*/
