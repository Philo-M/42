#include <stdlib.h>

int	ft_size(unsigned int nb)
{
	unsigned int	i = 1;

	while (nb / 10 > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char				*str;
	unsigned int		i = 0;
	unsigned int		nb = 0;
	unsigned int		size = 0;
	int					sign = 0;

	if (nbr < 0)
	{
		sign = 1;
		nb = (unsigned int)(-nbr);
	}
	else
		nb = (unsigned int)nbr;
	size = ft_size(nb);
	str = (char *)malloc(sizeof(char) * (size + sign + 1));
	if (str == NULL)
		return (NULL);
	str[size + sign] = '\0';
	while (i < size + sign)
	{
		str[size + sign - 1 - i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str = ft_itoa(-56);

	printf("%s\n", str);
	return (0);
}
