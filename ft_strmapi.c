/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:43:19 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/25 20:35:34 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len ;
	int		i;
	char	*p;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	i = 0;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
// char func(unsigned int i ,char  c)
// {
//     c = 'f';
//     return(c);
// }
// int main()
// {
//     char *s = "abcdef";
//     //char (*f)(unsigned int ,char) = &func;
//     printf("%s", ft_strmapi(s,&func));
// }
