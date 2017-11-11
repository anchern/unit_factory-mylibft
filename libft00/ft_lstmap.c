/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 04:35:18 by achernys          #+#    #+#             */
/*   Updated: 2017/11/11 07:13:59 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *content, size_t content_size)
{
	size_t i;

	i = 0;
	while (i < content_size)
	{
		free(&content[i]);
		i++;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(newlst = (t_list *)malloc(sizeof(*newlst))))
		return (NULL);
	if (lst->next == NULL)
	{
		newlst = (*f)(lst);
		return (newlst);
	}
	if (!(newlst = (*f)(lst)))
		ft_lstdel(&newlst, &del);
	newlst->next = ft_lstmap(lst->next, f);
	return (newlst);
}
