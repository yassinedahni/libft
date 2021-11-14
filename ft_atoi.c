/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:39:06 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/14 17:47:40 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
int	ft_atoi(const char *str)
{
	unsigned long r;
	int             i;
	int             c;

	i = 0;
	r = 0;
	c = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (r > 9223372036854775807 && c == -1)
		return (0);
	else if (r >= 9223372036854775807 && c == 1)
		return (-1);
	return (c * r);
}
/*
int main()
{
    char b []= "00000  0000214748  3648";
    int x;
    x = ft_atoi(b);
    printf("%d\n",x);
	x = atoi(b);
    printf("%d",x);
}*/
/*
int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}*/