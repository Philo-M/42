#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		ftputchar('\n');
	else
	{
		while (argv[argc - 1][i])
		{
			ftputchar(argv[argc - 1][i]);
			i++;
		}
		ftputchar('\n');
	}
	return (0);
}