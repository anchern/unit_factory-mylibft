/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:10:21 by achernys          #+#    #+#             */
/*   Updated: 2017/11/09 20:06:46 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**strcreate(char const *s, char c, int tmp, int i)
{
	int		j;
	char	**str;

	j = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			tmp += 1;
	}
	if (!(str = (char **)ft_memalloc(sizeof(char*) * (tmp + 1))))
		return (NULL);
	tmp = 0;
	while (*s != '\0')
	{
		tmp = *s != c ? tmp + 1 : tmp + 0;
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
		{
			if (!(str[j++] = (char *)ft_memalloc(sizeof(char) * (tmp + 1))))
				return (NULL);
			tmp = 0;
		}
		s++;
	}
	str[j] = 0;
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	int		j;
	int		k;
	char	**outsarr;

	if (s == NULL || !(outsarr = strcreate(s, c, 0, -1)))
		return (NULL);
	j = 0;
	k = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			outsarr[j][k] = *s;
			k++;
		}
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
		{
			outsarr[j][k] = '\0';
			k = 0;
			j++;
		}
		s++;
	}
	return (outsarr);
}
