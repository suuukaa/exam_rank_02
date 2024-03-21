/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:20:26 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/16 14:13:54 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// void print_bits(unsigned char octet)
// {
// 	int i = 7;
// 	int j;
// 	while(i >= 0)
// 	{
// 		j = (octet >> i) & 1;
// 		if (j == 0)
// 			write(1, "0", 1);
// 		else if (j == 1)
// 			write(1, "1", 1);
// 		i--;
// 	}
// }


// unsigned char	swap_bits(unsigned char octet)
// {
// 	return(octet << 4 | octet >> 4);
// }
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
int main()
{
	printf("%d", reverse_bits('2'));
}
// 0011 0010 -> 50 -> 2 in ascii
// 0010 0011 -> 35
// 0100 1100