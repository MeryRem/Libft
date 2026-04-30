/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:59:04 by mariredo          #+#    #+#             */
/*   Updated: 2026/04/30 18:27:42 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	t_list	*aux;

	if (!lst || !f)
		return;
	while (lst)
	{
		aux = lst->next;
		f(lst->content);
		lst = aux;
	}
}
