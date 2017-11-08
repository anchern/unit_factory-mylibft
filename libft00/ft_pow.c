/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:12:07 by anonymous         #+#    #+#             */
/*   Updated: 2017/11/06 23:15:37 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_pow(long num, int pow)
{
	if (pow == 0)
		return (1);
	return (num * ft_pow(num, pow - 1));
}
