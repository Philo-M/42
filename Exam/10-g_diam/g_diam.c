/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_diam.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:29:41 by pmandel           #+#    #+#             */
/*   Updated: 2022/10/28 13:29:42 by pmandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	nodes = 2;

int	ft_edges(char **s)
{
	int	nb = 0;

	while (**s && **s >= '0' && **s <= '9')
	{
		nb = nb * 10 + **s - 48;
		(*s)++;
	}
	if (**s)
		(*s)++;
	return (nb);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + 48;
	write(1, &c, 1);
}

void ft_nodes(int max, int path[max], int grid[max][max], int y, int len)
{
	int	x;

	path[y] = 1;
	x = -1;
	while (++x < max)
	{
		if (path[x] == 0 && grid[x][y] == 1)
		{
			if (nodes < len + 1)
				nodes = len + 1;
			ft_nodes(max, path, grid, x, len + 1);
		}
	}
	path[y] = 0;
}

void ft_graph(int max, char *str)
{
	int	path[max];
	int	grid[max][max];
	int x;
	int	y;

	x = -1;
	while (++x < max)
		path[x] = 0;
	x = -1;
	while (++x < max)
	{
		y = -1;
		while (++y < max)
			grid[x][y] = 0;
	}
	while (*str)
	{
		x = ft_edges(&str);
		y = ft_edges(&str);
		grid[x][y] = 1;
		grid[y][x] = 1;
	}
	y = -1;
	while (++y < max)
		ft_nodes(max, path, grid, y, 1);
}

int	main(int argc, char **argv)
{
	int		max = 0;
	int		tmp = 0;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		if (str[0] == '\0')
			nodes = 0;
		else if (ft_edges(&str) == ft_edges(&str) && *str == '\0')
			nodes = 1;
		else
		{
			while (*str)
			{
				tmp = ft_edges(&str);
				if (tmp > max)
					max = tmp;
			}
			max++;
		}
		str = argv[1];
		ft_graph(max, str);
		ft_putnbr(nodes);
	}
	write(1, "\n", 1);
	return (0);
}