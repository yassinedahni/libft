/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:53:12 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 02:02:18 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (n);
	while (str1[i] == str2[i] && i < n -1)
		i++;
	return (str1[i] - str2[i]);
}
/*
int main()
{
    char a[] = "d";
    char b[] = "s";
    size_t i;
    int x;
    
    i = 2;
    x = ft_memcmp(a,b,i);
    printf("%d\n", x);
    x = memcmp(a,b,i);
    printf("%d",x);
} */
