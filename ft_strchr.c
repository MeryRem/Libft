/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:05:15 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/21 10:20:37 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//int c will be compare as char
char *ft_strchr(const char *str, int c)
{
	//while *str is different of c, and c is converted to char
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}
/*
int	main(void)
{
	const char s[4] = "hola";
	int	c = 108;
	printf("%s ", ft_strchr(s, c));
}
*/
