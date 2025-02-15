/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/9 14:44:40 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/25 16:35:51 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long		res;
	int			sn;

	i = 0;
	res = 0;
	sn = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sn = sn * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if (res >= 9223372036854775807 && sn == 1)
			return (-1);
		if (res >= 9223372036854775807 && sn == -1)
			return (0);
		i++;
	}
	return (res * sn);
}
