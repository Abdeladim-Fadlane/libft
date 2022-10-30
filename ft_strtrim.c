/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:45:45 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/29 10:52:02 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (i < len - 1 && ft_strchr(set, s1[len -1]))
		len--;
	p = malloc(sizeof(char) * (len - i + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1 + i, len - i + 1);
	return (p);
}
