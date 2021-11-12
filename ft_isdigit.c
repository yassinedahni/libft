/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:30:01 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/12 02:51:42 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return(1);
    }
    else
        return(0);
}
/*
int main()
{
    int a = 48;
    printf("%d\n",ft_isdigit(a));
    printf("%d",isdigit(a));
}*/