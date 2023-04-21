/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:50:17 by imanol            #+#    #+#             */
/*   Updated: 2023/04/21 17:01:00 by imanol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index - 1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str;
		int index;

		str = argv[1];
		index = ft_strlen(str);
		while (index >= 0)
		{
			ft_putchar(str[index]);
			index--;
		}
	}
	ft_putchar('\n');
	return (0);
}
