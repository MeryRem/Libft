/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:43:10 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/20 18:03:55 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (n + 32);
	return (n); 
}
/*
int main() 
{
    char c = 'M';
    printf("%c %c", c, ft_tolower(c));
}
*/
