/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:44:04 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/26 09:03:46 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while ((s3[i] != '\0' || s4[i] != '\0') && i < n)
	{
		if (s3[i] > s4[i])
			return (1);
		else if (s3[i] < s4[i])
			return (-1);
		i++;
	}
	return (0);
}
