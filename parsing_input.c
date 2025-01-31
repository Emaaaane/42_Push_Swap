/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:45:14 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/30 22:45:37 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include"libft/libft.h"

int validate_number(char *str)
{
    int i;

    i =0 ; 
    if (str[i] == '-' || str[i] == '+' )
    {
        if((str[i+1] >= '0' && str[i+1] <= '9'))
            i++;
        else
        {
            write(2, "Error\n", 6);
            exit(0);
        }
        
    }
    while (str[i])
    {
        if(!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return(1);
}

int *parsing_input(char **arr, int size)
{
    //t_stack **stack = NULL;
    int i;
    int *numbers;
    numbers = malloc(sizeof int * size);
    
    if(!numbers)
        return(NUlL);
    i = 0;
    while(arr[i])
    {
        if(!validate_number(arr[i]))
        {
            write(2, "Error\n", 6);
            exit(0);
        }
        numbers[i] = ft_atoi(arr[i]); 
        if(numbers > INT_MAX || numbers < INT_MIN)
        {   
            write(2, "Error\n", 6);
            exit(0);
        }
        i++;
    }
    return(numbers);
}