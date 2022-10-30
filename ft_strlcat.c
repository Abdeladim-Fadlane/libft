/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:41:51 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/29 18:07:12 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	if (dstsize == 0 && !dst)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	j = 0;
	if (dstsize < len_dst + 1)
		return (dstsize + len_src);
	if (dstsize > len_dst + 1)
	{
		while (src[j] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
	return (len_src + len_dst);
}
