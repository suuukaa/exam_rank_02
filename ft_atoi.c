/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:10:55 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/12 11:40:58 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}	
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

#include <libc.h>

int main()
{
	printf("%d", ft_atoi("-234"));
}