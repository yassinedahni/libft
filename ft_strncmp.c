/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:59:06 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 03:38:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (n);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int main()
{
    char a[] = "yas";
    char b[] = "yassi";
    size_t i = 2;
    int x;
    
    x = ft_strncmp(a,b,i);
    printf("%d\n",x);
    x = strncmp(a,b,i);
    printf("%d",x);
    
}*/