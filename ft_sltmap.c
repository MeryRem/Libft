/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariredo <mariredo@student.42.malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:29:20 by mariredo          #+#    #+#             */
/*   Updated: 2026/05/04 13:25:02 by mariredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	dest = NULL;
	while (lst)
	{//new node with function applied 
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{//if node creation fails
			ft_lstclear(&dest, del);
			return NULL;
		}
		ft_lstadd_back(&dest, aux);
		lst = lst->next;
	}
	return (dest);
}
