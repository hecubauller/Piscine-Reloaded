/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:47:15 by huller            #+#    #+#             */
/*   Updated: 2019/04/04 20:52:10 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *a;

	i = 0;
	if (min >= max)
		return (0);
	a = (int*)malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
