/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:47:20 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/12 10:58:17 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char **av)
{
	if(ac == 4)
	{
		if(av[2][0] == '+')
		printf("%d", (atoi(av[1]) + atoi(av[3])));
		if(av[2][0] == '-')
		printf("%d", (atoi(av[1]) - atoi(av[3])));
		if(av[2][0] == '*')
		printf("%d", (atoi(av[1]) * atoi(av[3])));
		if(av[2][0] == '/')
		printf("%d", (atoi(av[1]) / atoi(av[3])));
		if(av[2][0] == '%')
		printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
	return 0;
}