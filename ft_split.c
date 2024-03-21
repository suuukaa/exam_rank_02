/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:40:07 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/03/06 18:24:37 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

// char *ft_strncpy(char *s1, char *s2, int n)
// {
// 	int i = 0;
// 	while(i < n && s2[i])
// 	{
// 		s1[i] = s2[i];
// 		i++;
// 	}
// 	s1[i] = '\0';
// 	return s1;
// }

// char **ft_split(char *str)
// {
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;
// 	int len = 0;
// 	int c = 0;
	
// 	while(str[i])
// 	{
// 		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 			i++;
// 		if(str[i])
// 			c++;
// 		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
// 			i++;
// 	}
// 	len = c + 1;
// 	char **res = malloc(sizeof(char *) * len);
// 	i = 0;
// 	while(str[i])
// 	{
// 		 while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 		 	i++;
// 		j = i;
// 		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
// 			i++;
// 		if(i > j)
// 		{
// 			res[k] = malloc(sizeof(char *) * (i - j) + 1);
// 			ft_strncpy(res[k++], &str[j], (i-j)); 
// 		}
// 	}
// 		res[k] = NULL;
// 		return res;
// }


// char *ft_strncpy(char *s1, char *s2, int n)
// {
// 	int i = 0;
// 	while(i < n && s2[i])
// 	{
// 		s1[i] = s2[i];
// 		i++;
// 	}
// 	s1[i] = '\0';
// 	return s1;
// }

// char **ft_split(char *str)
// {
// 	int i = 0;
// 	int j = 0;
// 	int k = 0;
// 	int len = 0;
// 	int count = 0;
	
// 	while(str[i])
// 	{
// 		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 			i++;
// 		if(str[i])
// 			count++;
// 		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
// 			i++;
// 	}
// 	len = count + 1;
// 	char **res = malloc(sizeof(char *) * len);
// 	i = 0;
// 	while(str[i])
// 	{
// 		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
// 			i++;
// 		j = i;
// 		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
// 			i++;
// 		if( i > j)
// 		{
// 			res[k] = malloc(sizeof(char *) * (i - j) + 1);
// 			ft_strncpy(res[k++], &str[j], (i-j));	
// 		}
// 	}
// 	res[k] = NULL;
// 	return res;
// }







char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while(i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}	
	s1[i] = '\0';
	return s1;
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	int count = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			count ++;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	len = count + 1;
	char **res = malloc(sizeof(char *) * len);
	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if(i > j)
		{
			res[k] = malloc(sizeof(char *) * (i - j) + 1);
			ft_strncpy(res[k++], &str[j], (i - j));
		}
	}
	res[k] = NULL;
	return res;
}

	int main ()
	{
		char **str = ft_split("souka ddd ddd dre re  ");
		int i = 0;
			printf ("%s\n", str[i++]);
	}

	