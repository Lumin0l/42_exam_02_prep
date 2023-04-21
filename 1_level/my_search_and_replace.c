/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanol <imanol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:07:47 by imanol            #+#    #+#             */
/*   Updated: 2023/04/19 18:20:34 by imanol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *string;
	char *original;
	char *replacement;
	int index;

	if (argc == 4)
	{
		string = argv[1];
		original = argv[2];
		replacement = argv[3];

		if (((original[0] >= 'a' && original[0] <= 'z') || (original[0] >= 'A' && original[0] <= 'Z')) && (original[1] == '\0'))
			if (((replacement[0] >= 'a' && replacement[0] <= 'z') || (replacement[0] >= 'A' && replacement[0] <= 'Z')) && (replacement[1] == '\0'))
			{
				index = 0;
				while (string[index] != '\0')
				{
					if (string[index] == original[0])
						string[index] = replacement[0];
					write(1, &string[index], 1);
					index++;
				}
			}
	}
	write(1, "\n", 1);
	return (0);
}