/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:29:05 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/08 14:50:55 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(char k, int i)
{
	while(i > 0)
	{
		write(1, &k, 1);
		i--;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int n = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				{
				n = av[1][i] + 1 - 'a';
				ft_print(av[1][i], n);
				}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
				n = av[1][i] + 1 - 'A';
				ft_print(av[1][i], n);
				}
				else
					write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}