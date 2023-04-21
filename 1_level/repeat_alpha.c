/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:58:58 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/04/20 17:09:11 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = (str[i] - 'A') + 1;
				while (j > 0)
				{
					ft_putchar(str[i]);
					j--;
				}
			}
			else if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = (str[i] - 'a') + 1;
				while (j > 0)
				{
					ft_putchar(str[i]);
					j--;
				}
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	return (0);
}