/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:37:56 by achernys          #+#    #+#             */
/*   Updated: 2017/11/08 21:55:53 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	big = ft_strchr(big, little[0]);
	while (big != '\0' && j < len - 1)
	{
		i = 0;
		while (little[i] != '\0')
		{
			if (little[i] != big[i])
				break ;
			i++;
		}
		if (i == ft_strlen(little))
			return ((char *)big);
		big = ft_strchr(big + 1, little[0]);
		j++;
	}
	return (0);
}
