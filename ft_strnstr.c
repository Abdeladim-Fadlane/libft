/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:44:36 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/27 17:50:49 by afadlane         ###   ########.fr       */
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
	if (!needle[i])
		return (p);
	if (!len || !p[i])
		return (NULL);
	while (p[i])
	{
		j = 0;
		while (p[i + j] == needle[j]
			&& i + j < len && needle[j])
			j++;
		if (needle[j] == '\0')
			return (&p[i]);
		i++;
	}
	return (NULL);
}
