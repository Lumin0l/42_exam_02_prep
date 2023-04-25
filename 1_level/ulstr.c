/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:16:22 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/04/25 17:52:15 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char *string;
	int	i;
	
	if (argc == 2)
	{
		string = argv[1];
		i = 0;
		while(string[i])
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
			{
				ft_putchar(string[i] += 32);
			}
			else if (string[i] >= 'a' && string[i] <= 'z')
			{
				ft_putchar(string[i] -= 32);
			}
			else
				ft_putchar(string[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

