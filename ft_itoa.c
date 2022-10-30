/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:31:46 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/30 11:43:14 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_lenght(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int m)
{
	int			len;
	char		*p;
	long long	n;

	n = m;
	len = ft_lenght(n);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		p[0] = '0';
	while (n > 0)
	{
		p[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (p);
}
