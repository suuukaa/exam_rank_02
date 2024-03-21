/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:21:23 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/28 10:32:05 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int positif(int h)
{
	if(h > 0)
		return h;
	else
		return -h;
}

int     *ft_range(int start, int end)
{
	int sign = positif(end - start) + 1;
	int i = 0;
	int *res = malloc(sizeof(int *) * sign);
	while(i < sign)
	{
		if(start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return res;
}

int main()
{
    int start = 0;
    int end = -3;

    int *result = ft_range(start, end);

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
