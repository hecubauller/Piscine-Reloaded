/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:40:45 by huller            #+#    #+#             */
/*   Updated: 2019/04/02 20:55:24 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int i;

	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	i = nb;
	return (i * ft_recursive_factorial(nb - 1));
}
