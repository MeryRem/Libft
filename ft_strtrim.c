/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:19:52 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/23 18:26:55 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	guessing(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*make_result(size_t start, size_t end, char *result, const char *s1)
{
	size_t	i;

	i = 0;
	while (start <= end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && guessing(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	while (s1[end] && guessing(set, s1[end]))
		end--;
	result = malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (NULL);
	result = make_result(start, end, result, s1);
	return (result);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("x", "xd"));
}
*/
