/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:39:16 by huller            #+#    #+#             */
/*   Updated: 2019/04/02 20:22:13 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0 && nb < 13)
	{
		while (nb != 0)
		{
			res *= nb;
			nb--;
		}
	}
	else
	{
		return (0);
	}
	return (res);
}
