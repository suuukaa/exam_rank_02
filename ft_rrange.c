/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:32:52 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/28 10:42:02 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int positif(int g)
{
	if(g < 0)
		return -g;
	return g;
}

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int len = positif(end - start) + 1;
	int *s = malloc(sizeof(int *) * len);
	while(i < len)
	{
		if(start < end)
		{
			s[i++] = end;
			end--;
		}
		else 
		{
			s[i++] = end;
			end++;
		}
	}
	return s;
}
int main()
{
    int start = -1;
    int end = 2;

    int *result = ft_rrange(start, end);

    if (result == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Generated range: ");
    for (int i = 0; i < positif(end - start) + 1; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);

    return 0;
}