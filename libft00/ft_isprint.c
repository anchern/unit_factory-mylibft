/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:21:59 by anonymous         #+#    #+#             */
/*   Updated: 2017/11/04 16:22:22 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isprint(int c)
{
    if (c == ' ')
        return (64);
    if (c < 32 || c > 126)
        return (0);
    if (ft_isalnum(c))
        return (ft_isalnum(c));
    return (16);
}