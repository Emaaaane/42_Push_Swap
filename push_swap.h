/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:51:56 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/30 22:03:46 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<limits.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

typedef struct s_stack
{
    int value;
    struct s_stack *next;
    struct s_stack *prev;
}   t_stack;


void *parsing_input(char **arr);
int validate_number(char *str);



 

#endif