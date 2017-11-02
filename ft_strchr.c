/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:48:21 by achernys          #+#    #+#             */
/*   Updated: 2017/11/02 16:57:25 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = ft_strdup(s);
	if (c == '\0')
		return (&res[ft_strlen(res)]);
	while (res[i] != '\0')
	{
		if (res[i] == c)
			return (&res[i]);
		i++;
	}
	return (0);
}
