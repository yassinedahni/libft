/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:15:25 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 01:50:02 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;
	int		c;

	i = 0;
	p = (char *)s;
	c = '\0';
	while (i < n)
	{
		p[i] = c;
		i++;
	}
}
/*
int main()
{
    char a[] = "yassine";
    size_t i = 1;
    ft_bzero(a,i);
    printf("%s",a);
}*/
