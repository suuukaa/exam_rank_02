/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:38:58 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/13 14:14:18 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

// int main()
// {
// 	printf("%lu", strspn("soukaina", "NULL"));
// }
// int main()
// {
//     const char str[] = "abcde12345";
//     const char accept[] = "abc";

//     size_t result = ft_strspn(str, accept);
//     printf("Length of initial segment containing only characters from accept: %zu\n", result);

//     // Test cases
//     printf("Test Cases:\n");
//     printf("Expected: 3, Actual: %zu\n", ft_strspn("abcde", "abc")); // Test when entire string is in accept
//     printf("Expected: 0, Actual: %zu\n", ft_strspn("abcde", "123")); // Test when none of the characters are in accept
//     printf("Expected: 0, Actual: %zu\n", ft_strspn("", "abc")); // Test with an empty string
//     printf("Expected: 2, Actual: %zu\n", ft_strspn("12345", "12")); // Test with an empty accept string
//     printf("Expected: 0, Actual: %zu\n", ft_strspn("", "")); // Test with both strings empty

//     return 0;
// }

// size_t	ft_strspn1(const char *s, const char *accept)
// {
// 	size_t i;
// 	i = 0;

// 	while (s[i] != '\0' && accept[i] != '\0' && ((s[i] == accept[i])))
// 			i++;
// 	return (i);
// }

// size_t ft_strspn2(const char *s, const char *accept)
// {
//     size_t i = 0;

//     while (*s) 
// 	{
//         while (*accept) 
// 		{
//             if (*s == *accept)
//                 break;
//             accept++;
//         }
//         if (!*accept)
//             return i;
//         i++;
//         s++;
//     }
//     return i;
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	return (0);
// }

// size_t	ft_strspn1(const char *s, const char *accept)
// {
// 	size_t i = 0;

// 	while (s[i] != '\0')
// 	{
// 		if (ft_strchr(accept, s[i]) == 0)
// 			break;
// 		i++;
// 	}

// 	return (i);
// }

// size_t ft_strspn(const char *s, const char *accept)
// {
// 	size_t i = 0;
// 	while(s[i] && accept[i])
// 	{
// 		if(s[i] == accept[i])
// 		{
// 			i++;
// 		}	
// 		else if(s[i] == accept[i + 1] || s[i + 1] == accept[i])
// 			i++;
// 		else
// 			break;
// 	}
// 	return i;
// }

size_t ft_strspn2(const char *s, const char *accept)
{
    size_t i = 0;

    while(*s)
    {
        while(*accept)
        {
            if(*s == *accept)
                break;
            accept++;
        }
        if(!*accept)
            return i;
        i++;
        s++;
    }
    return i;
}
int main()
{
    const char str[] = "abcde12345";
    const char accept[] = "abc";    
	size_t result = ft_strspn2(str, accept);

    printf("Length of initial segment containing only characters from accept: %zu\n", result);

    // Test cases
    printf("Test Cases:\n");
    printf("real  , Actual: %zu\n", strspn("aabcde", "aaaaaaaaaaabc")); // Test when entire string is in accept
    //printf("dyali , Actual: %zu\n", ft_strspn("aabcde", "aaaaaaaaaaabc")); // Test when entire string is in accept
    //printf("git , Actual: %zu\n", ft_strspn1("aabcde", "aaaaaaaaaaabc")); // Test when entire string is in accept
    printf(" , Actual: %zu\n", ft_strspn2("aabcde", "aaaaaaaaaaabc")); // Test when entire string is in accept
    // printf("Expected: 0, Actual: %zu\n", ft_strspn("abcde", "123")); // Test when none of the characters are in accept
    // printf("Expected: 0, Actual: %zu\n", ft_strspn("", "abc")); // Test with an empty string
    // printf("Expected: 0, Actual: %zu\n", ft_strspn("12345", "")); // Test with an empty accept string
    // printf("Expected: 0, Actual: %zu\n", ft_strspn("", "")); // Test with both strings empty

    return 0;
}