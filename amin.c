/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amin.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:00:45 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/10 12:38:56 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int sor(const void *a, const void *b)
{
	return(*(char *)a - *(char *)b);
}

void ft_amin(char *a, char *b)
{
	int p = strlen(a) + strlen(b) + 1;
	char s[p];
	char str[p];
	int i = 0;
	int j = 0;
	int k = 0;
	while(a[i] && b[j])
	{
		s[k] = a[i];
		k++;
		s[k] = b[j];
		i++;	
		j++;
		k++;
	}
	 while (a[i])
        s[k++] = a[i++];
    while (b[j])
        s[k++] = b[j++];
	s[k] = '\0';
	qsort(s, p - 1, sizeof(char), sor);
	k = 0;
	i = 0;
	while (s[k])
	{
		if (s[k] == s[k + 1] && s[k + 1] != '\0')
			k++;
		else
			str[i++] = s[k++];
	}
	str[i] = '\0';
	printf("%s", str);
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_amin(av[1], av[2]);
}