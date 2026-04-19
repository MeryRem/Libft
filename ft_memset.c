/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo0 <mariredo@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:17:44 by mariredo0         #+#    #+#             */
/*   Updated: 2026/04/16 20:17:44 by mariredo0        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

//*p is a pointer byte by byte, and *ptr doesn't move, always point the same

void    *ft_memset(void *ptr, int x, size_t n) //string, value and size of buffer 
{
    unsigned char   *p; //pointer byte by byte

    p = (unsigned char *)ptr;
    while (n > 0)
    {
        *p = (unsigned char)x; //write x in the current position
        p++; //move to next byte
        n--; //remaining bytes
    }
    return (ptr);//return modified string
}
