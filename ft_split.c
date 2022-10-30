/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:46:27 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/30 09:43:25 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_free(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

static void	my_func(const char *s, char c, char **p)
{
	int		j;
	int		k;
	int		i;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			k = i;
			while (s[i] != c && s[i])
				i++;
			p[j] = ft_substr(s, k, (i - k));
			if (p[j] == NULL)
				ft_free (p, j);
			j++;
		}
		else
			i++;
	}
	p[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!p)
		return (NULL);
	my_func(s, c, p);
	return (p);
}
