/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:45:01 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/26 10:09:53 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		i;
	char	*p;

	p = (char *)s;
	len = ft_strlen(s);
	i = 0;
	if (p[len] == (char)c)
		return (&p[len]);
	i = len - 1;
	while (i >= 0)
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}
