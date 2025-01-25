/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:25:37 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/25 17:50:07 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_digit(char c)
{
    if(c <= '9' && c >= '0')
        return(1);
    return (0);
}

int validate_number(char *str)
{
    int i;

    i =0 ; 
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if(!is_digit(str[i]))
            return (0);
        i++;
    }
    return(1);
}

// #include<stdio.h>
// int main()
// {
//     printf("%d", validate_number("42i"));
// }