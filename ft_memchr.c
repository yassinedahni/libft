/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:56:56 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 01:59:13 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	x = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (&x[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char a[] = "yas.s.in.e";
    char b = '.';
    char *x;

    x = ft_memchr(a,b,1);
    printf("%s\n",x);
     x = memchr(a,b,1);
    printf("%s",x);
}*/
