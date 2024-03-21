/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:30:50 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/12 11:43:21 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] == reject[0])
			return i;
		i++;
	}
	return i;
}

int main()
{
	printf("%lu", ft_strcspn("soukaina", "ou"));
}