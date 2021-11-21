/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:06:48 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/21 16:09:05 by ydahni           ###   ########.fr       */
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

int main()
{
	int a[] = {1,2,3,4,5,6};
	int b = 2;
	int i = 0;
	ft_memset(a,b,6);
	while(i < 6)
	{
		printf("%d\n",a[i]);
		i++;
	}
}
	