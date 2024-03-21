/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:19:31 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/08 13:27:02 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printac(int n)
{
	if(n <= 9)
	{
		n = n + '0';
		write(1, &n, 1);
	}
	else
	{
		ft_printac(n / 10);
		ft_printac(n % 10);
	}
}

int main(int ac, char **av)
{int i = 0;

	if(ac == 1)
		write(1, "0", 1);
	if(ac > 1)
	{
		i = ac - 1;
		ft_printac(i);	
	}
	write(1, "\n", 1);
	return 0;
}