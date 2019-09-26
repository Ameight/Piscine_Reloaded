/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 22:01:07 by ejuana            #+#    #+#             */
/*   Updated: 2019/09/04 05:50:09 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *buffer;
	int i;
	int j;

	if (min >= max)
		return (NULL);
	i = min;
	if (!(buffer = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	j = 0;
	while (i < max)
	{
		buffer[j] = i;
		i += 1;
		j += 1;
	}
	return (buffer);
}
