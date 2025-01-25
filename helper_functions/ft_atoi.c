/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:59:40 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/25 17:23:21 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    long signe;
    long res;
    int i;

    signe = 1;
    res = 0;
    i = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            signe = -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++; 
    }
    return(res * signe);
}
// #include<stdio.h>
// int main()
// {
//     char str[] = "-2147483648";
//     printf("%d", ft_atoi(str));
// }