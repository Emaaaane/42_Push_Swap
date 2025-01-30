/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:10:43 by imel-haj          #+#    #+#             */
/*   Updated: 2025/01/30 22:40:06 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

// t_stack *push_swap(int ac, char **av)
// {
//     void **stack = NULL;
//     char **args;
//     long num;
//     int i = 0;
//     int size = 0;

//     // if(ac == 2)
//     // {
//     //     args = ft_split(av[1], ' ');
//     // }
//     // else
//     //     args = &av[1];
//     while(args[i])
//     {
//         if (!validate_number(args[i]))
//         {
//             write(2, "Error\n", 6);
//             if(ac == 2)
//                 free_split(args);
//             free_stack(stack);
//             return ;
//         }
//         num = ft_atoi(args[i]);
//         if(num > INT_MAX || num < INT_MIN)
//         {
//             write(2, "Error\n", 6);
//             if(ac == 2)
//                 free_split(args);
//             free_stack(stack);
//             return ;
//         }
//         if(is_duplicated(stack, num, size))
//         {
//             write(2, "Error\n", 6);
//             if(ac == 2)
//                 free_split(args);
//             free_stack(stack);
//             return ;
//         }
//         store_args(stack, num);
//         i++;
//     }
//     if(ac == 2)
//         free_split(args);
//     return (stack);
// }

int	main(int ac, char **av)
{
	int i;
	// int j;
	char *buff;
	char **stack;
	char *s;

	// buff = ft_strjoin(av[1],av[2]);
	i = 2;
	if (ac > 1)
	{
		if(!av[1][0])
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		buff = ft_strdup(av[1]);
		if(!buff)
			return (0);
		while (av[i])
		{
			s = ft_strjoin(buff, av[i]);
			free(buff);
			buff = s;
			i++;
		}
		stack = ft_split(buff, ' ');
		parsing_input(stack);




		
		system("leaks push_swap");
		printf("buff---->%s\n", buff);
		int j = 0;
		while (stack[j])
		{
			printf("stack---->%s\n", stack[j]);
			j++;
		}
	}
	exit(0);
}