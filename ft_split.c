/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:46:27 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/25 19:14:39 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	p = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!p)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			k = i;
			while (s[i] != c && s[i])
				i++;
			p[j++] = ft_substr(s, k, (i - k));
		}
		else
			i++;
	}
	p[j] = 0;
	return (p);
}
// int main()
// {
//     char s[] = "hh aa bb cc";
//     char** str;
//     str = ft_split(s,'h'); 
//         int i;
//         i = 0;
//         while(i < ft_count(s,'h'))
//         {
//             printf("s[%d]=[%s]\n",i, *(str + i));
//             i++;
//         }
// }
