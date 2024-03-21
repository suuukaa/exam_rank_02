/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoaa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:43:10 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/03/06 17:27:08 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <libc.h>

// char *ft_itoa(int nbr)
// {
// 	if(nbr == -2147483648)
// 		return("-2147483648\0");
// 	int len = 0;
// 	int n = nbr;
// 	if(nbr <= 0)
// 		len++;
// 	while(n)
// 	{
// 		n = n / 10;
// 		len ++;
// 	}
// 	char *res = malloc(sizeof(char *) * (len + 1));
// 	if(!res)
// 		return NULL;
// 	res[len] = '\0';
// 	if(nbr == 0)
// 	{
// 		res[0] = '0';
// 		return res;
// 	}
// 	if( nbr < 0)
// 	{
// 		res[0] = '-';
// 		nbr = -nbr;
// 	}
// 	while (nbr)
// 	{
// 		res[--len] = nbr % 10 + '0';
// 		nbr = nbr / 10;
// 	}
// 	return res;
// }

// char *ft_itoa(int nbr)
// {
	// if(intmin)
	// 	return ("intmin\0")
// 	int n = nbr;
// 	int len = 0;
// 	if(nbr <= 0)
// 		len++;
// 	while(n)
// 	{
// 		n = n / 10;
// 		len ++;
// 	}
// 	char *res = malloc(sizeof(char *) * len + 1);
// 	if(!res)
// 		return NULL;
// 	res[len] = '\0';
// 	if(nbr == 0)
// 	{
// 		res[0] = '0';
// 		return res;
// 	}
// 	if(nbr < 0)
// 	{
// 		res[0] = '-';
// 		nbr = -nbr;
// 	}
// 	while(nbr)
// 	{
// 		res[--len] = nbr % 10 + '0';
// 		nbr  = nbr / 10;
// 	}
// 	return res;
// }

// char *ft_itoa(int nbr)
// {
// 	// if(nbr == intmin)
// 	// 	return("intmin\0");
// 	int n = nbr;
// 	int len = 0;
// 	if(nbr <= 0)
// 		len ++;
// 	while(n)
// 	{
// 		n = n / 10;
// 		len ++;
// 	}
// 	char *res = malloc(sizeof(char *) * len + 1);
// 	res[len] = '\0';
// 	if(!res)
// 		return (NULL);
// 	if(nbr == 0)
// 	{
// 		res[0] = '0';
// 		return res;
// 	}
// 	if(nbr < 0)
// 	{
// 		res[0] = '-';
// 		nbr = -nbr;
// 	}
// 	while(nbr)
// 	{
// 		res[--len] = nbr % 10 + '0';
// 		nbr = nbr / 10;
// 	}
// 	return res;
// }

char *ft_itoa(int nbr)
{
	// if(nbr = intmin)
	// 	return
	int n = nbr;
	int len = 0;
	if(nbr <= 0)
		len ++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	char *res = malloc(sizeof(char *) * len + 1);
	if(!res)
		return NULL;
	if(nbr == 0)
	{
		res[0] = '0';
			return res;
	}
	if(nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return res;
	
}
int main()
{
	printf("%s", ft_itoa(56455));
}