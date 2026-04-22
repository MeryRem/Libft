/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:04:36 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/22 13:30:49 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t elemnum, size_t elemsize)
{
	size_t	i;
	size_t	total;
	void	*p;
	//total bytes needed
	total = elemnum * elemsize;
	//ask for a block of memory of total bytes
	p = malloc(total);
	if (!p) 
		return (NULL);
	i = 0;
	while (i < total)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}
