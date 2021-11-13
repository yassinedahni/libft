/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:39:22 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/12 16:18:00 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    size_t i;

    i = 0;
    len = 0;
    while (src[len])
    {
        len++;
    }
    if (dstsize == 0)
        return (len);
    while (src[i] && i < dstsize - 1)
    {
        dst[i] =  src[i];
        i++;
    }
    dst[i] = '\0';
    return(len);
}
int main()
{
    char d[] = "yassine";
    char s[] = "dahni";
    size_t n = 0;
    ft_strlcpy(d,s,n);
    printf("%s\n",d);
    strlcpy(d,s,n);
    printf("%s",d);
}