/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:57:28 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/15 15:19:02 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int max(int *tab, unsigned int len)
{
	int i = 0;
	int largest = 0;
	while(i < len)
	{
		if( largest < tab[i])
			largest = tab[i];
		i++;
	}
	return largest;
} 

int main()
{
	int h[4] = {1, 6, 6, 9};
 	printf("%d", max(h, 4));	
}