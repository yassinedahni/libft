/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:34:16 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/12 02:48:50 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return(1);
    }
    else
        return(0);
}
/*
int main()
{
    int a = 128;
    printf("%d",ft_isascii(128));  
}
*/