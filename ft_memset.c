/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:06:48 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 02:14:41 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new;
	size_t			i;

	new = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		new[i] = c;
		i++;
	}
	str = new;
	return (str);
}
/*
int main () {
   char str[] = "yassine";

   ft_memset(str+2,'$',2);
   puts(str);
//    memset(str,'$',15);
//    puts(str);
   
   
   return(0);
}*/
