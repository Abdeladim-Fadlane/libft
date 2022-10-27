/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:46:15 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/27 16:52:32 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start ;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
