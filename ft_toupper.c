/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:34:11 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/21 02:43:04 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
/*
int main()
{
	char x[] = "hello";
	int i;
	
	
	i = 0;
	while (x[i])
	{
		
		printf("%c",ft_toupper(x[i]));
		i++;
	}
}*/