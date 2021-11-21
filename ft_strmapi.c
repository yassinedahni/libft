/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:53:45 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/21 05:22:46 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len;
	int i;
	char *p;
	
	i = 0;
	len = ft_strlen(s);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while(s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
char f(unsigned int i, char c)
{
	(void)i;
	c -= 32;
	return (c);
}
int main()
{
	char a[] = "yassine";
	printf("%s",ft_strmapi(a, f));
}

 
x = f;