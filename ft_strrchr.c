/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:44:01 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 03:21:17 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*n;

	n = (char *)s;
	if (c == 0)
		return (n + ft_strlen(n));
	i = ft_strlen(n);
	while (i >= 0)
	{
		if (n[i] == (char)c)
			return (&n[i]);
		i--;
	}
	return (0);
}
/*
int main()
{
    char a[] = "yas.si.ne";
    char b = '.';
    char *c;

    c = ft_strrchr(a,b);
    printf("%s",c);
}*/