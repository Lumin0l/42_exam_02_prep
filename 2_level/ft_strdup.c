#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}


char    *ft_strdup(char *src)
{
	int	i;
	char *dest;
	int	len;

	i = 0;
	len = ft_strlen(src);
	dest = (char*)malloc((len + 1) * sizeof(char));
	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);	
}

/*
int	main(void)
{
	char *src = "I'm a message";
	char *dest;

	dest = ft_strdup(src);
	printf("%s", dest);
	
	return (0);
}
*/
