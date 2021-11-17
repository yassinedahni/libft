/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:39:15 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 02:11:57 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (s == d)
		return (d);
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
		return (d);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int main()
{
    char d[] = "yassine";
    char s[] = "dahni";
    ft_memmove(d,s,5);
    printf("%s\n",d);
    memmove(d,s,5);
    printf("%s",d);

}
*/
/*int main()
{
    char s1[] = "Learningisfun";
    char s2[] = "Learningisfun";

    ft_memmove(s1 + 5, s1, 8);
    printf("m  y %s \n",s1);
    memmove(s2 + 5, s2, 8);
    printf("ther %s \n",s2);
}
*/
