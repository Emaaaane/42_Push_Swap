/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:07:16 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/25 20:49:51 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_stack *new_list(int va lue)
{
    t_stack *new_list;
    new_list = malloc(sizeof(t_stack));
    if(!new_list)
    {
        free(new_list);
        return (NULL);
    }  
    new_list->value = value;
    new_list->next = NULL;
    new_list->prev = NULL;
    return(new_list);
}
