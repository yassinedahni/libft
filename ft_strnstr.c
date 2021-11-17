/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:10:52 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 03:20:48 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	x;
	char	*s1;
	char	*s2;

	s1 = (char *) str1;
	s2 = (char *) str2;
	i = 0;
	if (len == 0 && !str1 && str2)
		return (NULL);
	if (s2[0] == '\0')
		return (s1);
	while (s1[i] != '\0' && i < len)
	{
		x = 0;
		while (s1[i + x] != '\0' && s1 [i + x] == s2[x] && i + x < len)
		{
			if (s2[x + 1] == '\0')
				return (&s1[i]);
			x++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
    char *a = NULL;
    char *b = NULL;
    size_t i = 0;
    char *s;
    s = ft_strnstr(a,b,i);
    printf("%s\n",s);
	s = strnstr(a,b,i);
    printf("%s",s);
}*/