/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:17:34 by huller            #+#    #+#             */
/*   Updated: 2019/04/02 18:47:39 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char i;

	i = 97;
	while (i != 123)
	{
		ft_putchar(i);
		i++;
	}
}
