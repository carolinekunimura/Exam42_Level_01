#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str)
		i++;
	return(i);
}

int	main(int argc, char **argv)
{
	int 	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				write(1, "_", 1);
				argv[1][i] = argv[1][i] + 32;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}