/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:01:15 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/02/27 17:11:20 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 1;
	if(begin_list == NULL)
		return 0;
	else
		 i += ft_list_size(begin_list->next);
	return(i); 
}
 int main()
 {
     t_list *ff = malloc(sizeof(t_list));
     t_list *f = malloc(sizeof(t_list));
     t_list *s = malloc(sizeof(t_list));
     ff->data = "a";
     ff->next = f;
     f->data = "t";
     f->next = s;
     s->data = "a";
     s->next = NULL;

     printf("%d", ft_list_size(ff));
 }