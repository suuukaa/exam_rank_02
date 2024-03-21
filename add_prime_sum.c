/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:42:11 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/27 12:11:08 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void put_nb(int n)
{
	if(n <= 9)
	{
		n += '0';
		write(1, &n, 1);
	}
	else
	{
		put_nb(n / 10);
		put_nb(n % 10);
	}
}

int add_prime_sum(int s)
{
	if(s <= 1 || (s % 2 == 0 && s > 2))
		return 0;
	int i = 3;
	while( i < (s/2))
	{
		if(s % i++ == 0 )
			return 0;
	}
	return 1;
}

void ft_main(int j)
{
	int h  = 0;
	while(j > 0)
	{
		if(add_prime_sum(j))
			h += j;
		j--;
	}	
	put_nb(h);
}


int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_main(atoi(av[1]));
	}
	write(1, "\n", 1);
}
