/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:35:52 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/29 10:40:56 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (src == dst)
		return (dst);
	if (s < d)
	{
		i = len -1;
		while (i < len)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
