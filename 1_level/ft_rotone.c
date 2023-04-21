/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:53:27 by imanol            #+#    #+#             */
/*   Updated: 2023/04/21 12:10:24 by imanol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char *str;
	int index;
	if (argc == 2)
	{
		str = argv[1];
		index = 0;
		while (str[index] != '\0')
		{
			if ((str[index] >= 'A' && str[index] <= 'Z') || (str[index] >= 'a' && str[index] <= 'z'))
			{
				if (str[index] == 'Z')
					str[index] = 'A';
				else if (str[index] == 'z')
					str[index] = 'a';
				else
					str[index] += 1;
			}
			ft_putchar(str[index]);
			index++;
		}
	}
	ft_putchar('\n');
	return (0);
}
