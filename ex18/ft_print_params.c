/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:57:53 by huller            #+#    #+#             */
/*   Updated: 2019/04/03 14:55:03 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int numb;

	i = 0;
	numb = 1;
	while (numb < argc)
	{
		while (argv[numb][i] != '\0')
		{
			ft_putchar(argv[numb][i]);
			i++;
		}
		i = 0;
		numb++;
		ft_putchar('\n');
	}
	return (0);
}
