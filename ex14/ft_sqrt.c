/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 18:13:54 by ejuana            #+#    #+#             */
/*   Updated: 2019/08/03 19:05:19 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int count;

	if (nb > 0)
	{
		count = 1;
		while ((count * count) <= nb)
		{
			if ((count * count) == nb)
				return (count);
			else if ((count * count) > nb)
				return (0);
			count += 1;
		}
	}
	return (0);
}
