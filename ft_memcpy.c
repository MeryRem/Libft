/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo0 <mariredo@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 20:19:10 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/19 20:19:10 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
//#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    if (src == NULL && dest == NULL)
        return (NULL);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}
/*
int main(void)
{
    char    src[5] = "Hola";
    char    dest[5];
    size_t  i;

    i = 0;
    ft_memcpy(dest, src, 5);
    while (i < 5)
    {
        printf("%c", dest[i]);
        i++;
    }
    printf("\n");
}
*/
