/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:44:36 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/26 09:26:47 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	p = (char *)haystack;
	i = 0;
	j = 0 ;
	if (needle[j] == '\0' )
		return (p);
	if (len == 0 || p[i] == '0')
		return (NULL);
	while (p[i] != '\0')
	{
		while (p[i + j] == needle[j] && p[i + j] != '\0'
			&& i + j < len && needle[j])
			j++;
		if (needle[j] == '\0')
			return (&p[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
