/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:39:12 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/12 15:34:27 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dst,const void *src, size_t n)
{
    char *d = (char *)dst;
    const char *s = (char *)src;
    size_t i;

   i = 0;
   if (s == d)
        return(d);
    while (i < n)
    {
        d[i] =  s[i];
        i++;
    }
    return(dst);
}
/*int main()
{
    char s[] = "yassine";
    char d[] = "dahni";
    size_t n = 13;
    ft_memcpy(d,s,n);
    printf("%s\n",d);
    memcpy(d,s,n);
    printf("%s",d);
}*/