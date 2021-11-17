/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:25:21 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 02:19:44 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*n;

	i = 0;
	n = (char *)s;
	if (c == 0)
		return (n + ft_strlen(n));
	while (n[i])
	{
		if (n[i] == (char)c)
			return (&n[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    char a[] = "ya.ssi.ne";
    char b = '.';
    char *c;
    
    c = ft_strchr(a,b);
    printf("%s",c);
}*/
