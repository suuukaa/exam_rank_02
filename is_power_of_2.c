/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:13:36 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/14 14:23:27 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if(n == 0)
		return 0;
	else if (n == 1)
		return 0;
	else if(n % 2 == 0)
		return 1;
	else
		return 0;
}

#include <stdio.h>

int main()
{
	printf("%d", is_power_of_2(3));
}