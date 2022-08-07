#include "func.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len++])
	return(len);
}

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *c, int fd)
{
	write(fd, c, ft_strlen(c));
}

int	ft_check_num(char *nbr)
{
	while(*nbr)
	{
		if (*nbr < '0'|| *nbr > '9')
		{
			ft_putstr("Error", 1);
			return (1);
		}
		nbr++;
	}
	return (0);
}
