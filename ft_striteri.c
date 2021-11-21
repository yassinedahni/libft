/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:17:23 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/21 16:31:54 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void f(unsigned int i, char *c)
{
    c += i;
}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
int main()
{
    char b[] = "123456789";
    ft_striteri(b,f);
    printf("%s",b);
    
}