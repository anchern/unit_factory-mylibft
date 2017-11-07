/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <null>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:37:56 by achernys          #+#    #+#             */
/*   Updated: 2017/11/06 22:33:15 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *tmp;

	tmp = ft_strdup(big);
	tmp[len] = '\0';
	return (ft_strstr(tmp, little));
}
