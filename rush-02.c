/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:55:54 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/07 16:51:26 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "func.c"

#ifndef BUFF_SIZE
# define BUFF_SIZE 30720
#endif
int main(int ac, char **av)
{
	int 	fd;
	char	*dict;

	fd = 0;
	if (ac == 2) // just print the num
	{
		if(ft_check_num(av[1]))
			return (1);
		fd = open("numbers.dict", O_RDONLY); 
		if (fd == -1)
		{
			ft_putstr("open() error", 1); //fd instead of 1 for using func to write in file
			return (1);
		}
		dict = malloc(sizeof(dict) * BUFF_SIZE); //defining dict array with size of file + null
		if (read(fd, dict, BUFF_SIZE) == -1) //reading file to array
		{
			ft_putstr("read() error", 1);
			return (1);
		}
		if (close(fd) == -1)
		{
			ft_putstr("close() error", 1);
			return (1);
		}
	}
	/*else if (ac == 3)
	{
	
	}*/
}
