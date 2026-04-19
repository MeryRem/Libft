/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo0 <mariredo@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 18:36:16 by mariredo0         #+#    #+#             */
/*   Updated: 2026/04/19 18:36:16 by mariredo0        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
//#include <stdio.h>
//this function sets a memory block to zero(\0) using memset
void    ft_bzero(void *s, size_t n)
{   
    ft_memset(s, '\0', n);
}

/*
int main(void)
{
    char buffer[4] = "Hola";
    size_t i = 0;
    ft_bzero(buffer, 3);
    while (i < 4)
    {
        printf("%d", buffer[i]);
        i++;
    }
}
*/
