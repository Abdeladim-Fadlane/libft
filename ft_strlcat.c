/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:41:51 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/25 20:30:51 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	j = 0;
	if (dstsize == 0 || dstsize < len_dst + 1)
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
//int main()
//{
//	char dst[12] = "12345678";
//	char src[] = "123";
//	printf("%zu\n",strlcat(dst, src, 9));
//	printf("%s", dst);
//}
