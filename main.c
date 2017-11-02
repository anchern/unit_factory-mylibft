/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achernys <achernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:28:57 by achernys          #+#    #+#             */
/*   Updated: 2017/11/02 20:07:41 by achernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <limits.h>



int main(void)
{
    char str11[] = "er";
    char str12[] = "";
	char str21[] = "er";
//	char str22[5] = "";
//	int str1[6] = {INT_MAX, INT_MIN, 3, 4, 5, 6};
//	int str2[6] = {INT_MAX, INT_MIN, 3, 4, 5, 6};

	printf("%d\n", ft_strcmp(str11, str12));
    printf("%d\n", strcmp(str21, str12));
	printf("%s\n", str11);
    printf("%s\n", str21);


	return 0;
}