/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:04:59 by anonymous         #+#    #+#             */
/*   Updated: 2017/11/04 14:09:09 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
size_t     ft_strlendigit(char *str)
{
    size_t len;

    len = 0;
    while (str[len] != '\0' && ft_isdigit(str[len]))
        len++;
    return (len);
}
int     res_atoi(char *str, int multiplication)
{
    int res;

    if (*str == '\0' || !ft_isdigit(*str))
        return (0);
    res = res_atoi(str + 1, multiplication / 10) + (*str - 48) * multiplication;
    return (res);
}

int     ft_atoi(char *str)
{
    int i;

    i = 0;
    while (str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-')
    {
        i++;
        if (!ft_strlendigit(&str[i]))
            return (0);
        return (-res_atoi(&str[i], ft_pow(10, ft_strlendigit(&str[i]) - 1)));
    }
    if (str[i] == '+')
    {
        i++;
        if (!ft_strlendigit(&str[i]))
            return (0);
        return (res_atoi(&str[i], ft_pow(10, ft_strlendigit(&str[i]) - 1)));
    }
    if (!ft_strlendigit(&str[i]))
        return (0);
    return (res_atoi(&str[i], ft_pow(10, ft_strlendigit(&str[i]) - 1)));
}
