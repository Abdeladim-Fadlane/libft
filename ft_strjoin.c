/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:41:21 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/25 17:13:49 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lens1;
	size_t		lens2;
	char		*p;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	p = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (p == 0)
		return (NULL);
	ft_memcpy(p, s1, lens1);
	ft_memcpy(p + lens1, s2, lens2 + 1);
	return (p);
}
