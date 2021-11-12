/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:38:59 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/12 02:51:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_tolower(int c)
{
    if ( c >= 'A' && c <= 'Z')
    {
        c += 32;
        return(c);
    }
    else
        return(c);
}
/*
int main()
{
    printf("%c",ft_tolower('3'));
}*/