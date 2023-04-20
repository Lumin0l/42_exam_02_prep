/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:15:08 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/04/20 15:32:02 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Practice for ft_strcpy ide-la-i */
#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s2[index] != '\0')
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
/*
int	main(void)
{
	char *s1;
	char *s2;

	s2 = "grammar iiuhv";
	s1 = ft_strcpy(s1, s2);
	printf("%s", s1);

	return (0);
}
*/

