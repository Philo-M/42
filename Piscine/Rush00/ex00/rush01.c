void	ft_putchar(char c);

void	firstline(int length)
{
	int	i;

	i = 1;
	ft_putchar('/');
	while (++i < length)
		ft_putchar('*');
	if (length >= 2)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	intermediateline(int length, int heigth)
{
	int	i;

	while (heigth-- > 2)
	{
		i = 0;
		ft_putchar('*');
		while (++i < length - 1)
			ft_putchar(' ');
		if (length > 1)
			ft_putchar('*');
		ft_putchar('\n');
	}
}

void	lastline(int length)
{
	int	i;

	i = 1;
	ft_putchar('\\');
	while (++i < length)
		ft_putchar('*');
	if (length >= 2)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int col, int lig)
{
	if (col > 0 && lig > 0)
	{
		firstline(col);
		intermediateline(col, lig);
		if (lig > 1)
			lastline(col);
	}
}
