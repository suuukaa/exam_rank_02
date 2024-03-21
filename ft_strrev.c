/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:46:27 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/12 18:19:10 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

                   -------------code-1--------------------------
int len(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}

#include <libc.h>

char    *ft_strrev(char *str)
{
	int r = len(str);
	int j = 0;
	int i = 0;
	char ss[r + 1];
	
	while(str[j])
		j++;
	j--;
	while(j >= 0)
	{
		ss[i] = str[j];
		j--;
		i++;
	}
	ss[i] = '\0';
	
	i = 0;
	while(ss[i])
	{
		str[i] = ss[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

             -------------code-2--------------------------

#include <stdio.h>

int len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

char *ft_strrev(char *str)
{
    int length = len(str);
    int i = 0;
	int j = length - 1;
    char temp;

	while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
		i++;
		j--;
    }

    return str;
}

