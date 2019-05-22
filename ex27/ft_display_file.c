/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:30:30 by huller            #+#    #+#             */
/*   Updated: 2019/04/07 16:40:04 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 4096

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(char const *s)
{
	if (s)
		return (write(1, s, ft_strlen(s)));
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		file;
	int		zicl;
	char	buf[BUFF_SIZE + 1];

	zicl = 1;
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		file = open(argv[1], O_RDONLY);
		if (file != -1)
		{
			while (zicl)
			{
				zicl = read(file, buf, BUFF_SIZE);
				buf[zicl] = '\0';
				ft_putstr(buf);
			}
		}
		close(file);
	}
	return (0);
}
