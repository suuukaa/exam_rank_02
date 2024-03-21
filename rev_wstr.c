/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:30:40 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/11 11:30:43 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int len(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

int last(char *str, int *c)
{
    int i = 0;
    int s = 0;
    int l = 0;
    while(str[i])
        i++;
    s = i;
    while(str[i - 1] != ' ' && i > 0)
        i--;
    l = i;
    while(i < s)
    {
        write(1, &str[i], 1);
        i++;
    }
    *c = *c - (s - l);
    return (l);
}

int words(char *str)
{
    int i = 0;
    int c = 0;
    while (str[i])
    {
        while(str[i] == ' ')
            i++;
        if (str[i] != ' ')
            c++;
        while(str[i] != ' ' && str[i] != '\0')
            i++;
    }
    return (c);
}

void    wstr(char *str)
{
    int i = 0;
    int l = 0;
    int word = words(str);
    while(word > 0)
    {
        i = len(str);
        l = last(str, &i);
        str[l - 1] = '\0';
        word--;
        if (word > 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        wstr(av[1]);
    write(1, "\n", 1);
}