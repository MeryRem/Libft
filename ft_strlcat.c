/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:47:45 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/22 12:58:32 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	while (dest[dlen] && dlen < size)
		dlen++;

	slen = 0;
	while (src[slen])
		slen++;

	if (dlen == size)
		return (size + slen);

	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}

	dest[dlen + i] = '\0';

	return (dlen + slen);
}
