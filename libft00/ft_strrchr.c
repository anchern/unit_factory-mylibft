/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:07:51 by achernys          #+#    #+#             */
/*   Updated: 2017/11/02 16:08:01 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	unsigned char	flag;
	size_t			i;
	size_t			tmp;
	char			*res;

	flag = 0;
	i = 0;
	res = ft_strdup(s);
	if (c == '\0')
		return (&res[ft_strlen(res)]);
	while (res[i] != '\0')
	{
		if (res[i] == c)
		{
			tmp = i;
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
		return (&res[tmp]);
	return (0);
}
