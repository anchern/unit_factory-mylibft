/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:04:59 by anonymous         #+#    #+#             */
/*   Updated: 2017/11/07 20:41:11 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_strlend(char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0' && ft_isdigit(str[len]))
		len++;
	return (len);
}

static unsigned long	atoul(char *str, long multiplication)
{
	unsigned long res;

	if (!ft_isdigit(*str))
		return (0);
	res = atoul(str + 1, multiplication / 10) + (*str - 48) * multiplication;
	return (res);
}

static unsigned char	overflow_check(char *str)
{
	unsigned long tmp;
	unsigned long max;

	if (ft_strlend(str) > 20)
		return (1);
	tmp = atoul(str, ft_pow(10, (int)ft_strlend(str) - 1));
	max = 9223372036854775807U;
	if (tmp > max)
		return (1);
	return (0);
}

int				ft_atoi(char *str)
{
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (!ft_strlend(&str[++i]))
			return (0);
	if (str[i - 1] == '-')
	{
		if (overflow_check(&str[i]) == 1)
			return (0);
		return (-(int)atoul(&str[i], ft_pow(10, (int)ft_strlend(&str[i]) - 1)));
	}
	if (str[i - 1] == '+')
	{
		if (overflow_check(&str[i]) == 1)
			return (-1);
		return ((int)atoul(&str[i], ft_pow(10, (int)ft_strlend(&str[i]) - 1)));
	}
	if (!ft_strlend(&str[i]))
		return (0);
	if (overflow_check(&str[i]) == 1)
		return (-1);
	return ((int)atoul(&str[i], ft_pow(10, (int)ft_strlend(&str[i]) - 1)));
}
