/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:19:20 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/18 23:05:13 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	if (size == 0 || size <= dstlen)
		return (srclen + size);
	while (src[i] && i < size - dstlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
/*
int main()
{
    char a[20] = "yassine";
    char b[] = "dahni";
    size_t i = 10;
    
    ft_strlcat(a,b,i);
    printf("%s\n",a);
    strlcat(a,b,i);
    printf("%s",a);
}*/