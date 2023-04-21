/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:23:37 by imanol            #+#    #+#             */
/*   Updated: 2023/04/19 18:54:45 by imanol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *string;
	int index;

	if (argc == 2)
	{
		string = argv[1];
		index = 0;

		while ((string[index] == ' ' || string[index] == '\t' || string[index] == '\n') && (string[index] != '\0'))
			index++;
		while ((string[index] != ' ' && string[index] != '\t' && string[index] != '\n') && (string[index] != '\0'))
		{
			write(1, &string[index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}