/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:11:03 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/08 12:55:07 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printi(int n)
{
	if (n <= 9)
	{
	n = n + '0';
	write(1, &n, 1);
	}
	else
	{
		ft_printi(n / 10);
		ft_printi(n % 10);
	}
}
int main()
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_printi(i);
		write(1, "\n", 1);
		i++;
	}
}