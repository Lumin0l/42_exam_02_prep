/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:45:43 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/04/20 14:13:10 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fizzbuzz practice idde-la-i */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int	index;
	
	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;	
	}
}

int	main(void)
{
	int	index;
	
	index = 1;
	while (index < 101)
	{
		if ((index % 3 == 0) || (index % 5 == 0))
		{
			if (index % 3 == 0)
				ft_putstring("fizz");
			if (index % 5 == 0)
				ft_putstring("buzz");
		}
		else
		{
			if (index < 10)
				ft_putchar(index + 48);
			else
			{
				ft_putchar((index / 10) + 48);
				ft_putchar((index % 10) + 48);
			}
		}
		ft_putchar('\n');
		index++;
	}
	return (0);
}