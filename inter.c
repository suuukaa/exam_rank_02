/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:15:48 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/28 14:35:53 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int is_dup(char *s, char c, int index)
// {
//     int i = 0;
//     while (i < index)
//     {
//         if (s[i] == c)
//             return 1;
//         i++;
//     }
//     return 0;
// }

// void    inter(char *s1, char *s2)
// {
//     int i = 0;
//     int j = 0;
//     while(s1[i])
//     {
//         j = 0;
//         while(s2[j])
//         {
//             if (s1[i] == s2[j] && !is_dup(s1, s2[j], i))
//             {
//                 write(1, &s2[j], 1);
//                 break;
//             }
//             j++;
//         }
//         i++; 
//     }
// }

// int ftdouble(char *q, char a, int index)
// {
// 	int i = 0;
// 	while(i < index)
// 	{
// 		if(q[i] == a)
// 			return 1;
// 		i++;
// 	}
// 	return 0;
// }
void inter(char *s, char *r)
{
    int i= 0;
    int j =0;
    while(s[i])
    {
        while(r[j])
        {
            if(s[i] == r[j])
            {
               write(1, &s[i], 1 && !ftdouble(s, r[j], i));
                break;
                }-
            j++;
        }
        i++;
    }
}

int doubble(char *q, char a, int index)
{
	int i = 0;
	while(i < index)
	{
		if(q[i] == a)
			return 1;
		i++;
	}
	return 0;
}

void inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j] && !doubble(s1, s2[j], i))
			{
				write(1, &s2[j], 1);
				break;
			}
			j++;
		}
		i++;
	}
}
  