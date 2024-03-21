/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:18:52 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/12 13:42:17 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	if(!s1 || !s2)
		return (0);
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}

#include <libc.h>

int main()
{
	printf("%s", strpbrk("sukaina", "ina"));	
}