/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 06:06:23 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/19 19:37:30 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	i;

	i = count * size;
	a = malloc(i);
	if (a == 0)
		return (NULL);
	ft_bzero(a, i);
	return (a);
}
/*
int main()
{
	char *x = "yassnie";
	x = ft_strdup(x);
	printf("befor :%s\n",x);
	x = ft_calloc(3,2);
	printf("after : %s",x);
}*/