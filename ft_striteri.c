/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:13:48 by afadlane          #+#    #+#             */
/*   Updated: 2022/10/26 16:53:35 by afadlane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void func(unsigned int i ,char  *c)
// {
//		 *c = '4';
//		 i = 0;	
// }
// int main()
// {
//     char s[] = "abcdef";
//	 ft_striteri(s,&func);
//     printf("%s",s);
// }