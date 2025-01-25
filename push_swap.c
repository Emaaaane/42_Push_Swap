/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:10:43 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/25 18:02:38 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *push_swap(int ac, char **av)
{
    t_stack *stack = init_stack();
    char **numbers;
    long num;
    int i = 0;
     
     
    if(ac == 2)
    {
        numbers = ft_split(av[1], ' ');
    }
    // else
    //     numbers = &av[1];
    while(numbers[i])
    {
        if (!validate_number(numbers[i]))
        {
            write(2, "Error\n", 6);
            if(ac == 2)
                free_split(numbers);
            free_stack(stack);
            return;
        }
        num = ft_atoi(numbers[i]);
        if(num > INT_MAX || num < INT_MIN)
        {
            write(2, "Error\n", 6);
            if(ac == 2)
                free_split(numbers);
            free_stack(stack);
            return;
        }
        if(is_duplicated(stack, num))
        {
            write(2, "Error\n", 6);
            if(ac == 2)
                free_split(numbers);
            free_stack(stack);
            return;
        }
        store_numbers(stack, num);
        i++;
    }
    if(ac == 2)
        free_split(numbers);
    return (stack);
}
