/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 04:08:28 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/17 06:29:48 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_counterword(char const *s, char c)
{
    int i;
    int x;

    x = 0;
    i = 0;
    if (s[i] != c)
        x++;
    while(s[i])
    {
        if (s[i] == c && s[i+1] != c && s[i+1] != '\0')
            x++;
        i++;        
    }
    return(x);    
}
int ft_counterchar(char const *s,char c)
{
    int i;

    i = 0;
    while (s[i] != c && s[i])
    {
        i++;
    }
    return(i);
}
char **ft_split(char const *s, char c)
{
    int count;
    char **new;
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (!s)
        return(NULL);
    count = ft_counterword(s,c);
    new = malloc(sizeof(char *)* (count + 1));
    if (!new)
        return (NULL);
    while (s[i])
    {
        while (j < count)
        {
             while (s[i] == c && s[i])
                i++;
            new[j++] = ft_substr(s, i, ft_counterchar(s + i,c));
            i += ft_counterchar(s + i,c);
        }
        i++;
    }
    new[j] = NULL;
    return (new);
}
/*
int main()
{
    char c[] = "na";
    char s = '+';
    int i = 0;
    char **p = ft_split("olol", NULL);
   // while (p[i])
        printf("|%s|",p[i++]);
    //system("leaks a.out");
    printf("\nword = %d\nchar = %d",ft_counterword(c,s),ft_counterchar(c,s));
}
*/