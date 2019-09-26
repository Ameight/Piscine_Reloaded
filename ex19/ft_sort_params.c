/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 03:52:38 by ejuana            #+#    #+#             */
/*   Updated: 2019/08/07 21:05:45 by ejuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i += 1;
	}
	ft_putchar('\n');
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i += 1;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		searchpos;
	int		morebig;
	char	*avto;

	searchpos = 0;
	while (searchpos < argc - 1)
	{
		morebig = 0;
		while (morebig < argc - searchpos - 1)
		{
			if (ft_strcmp(argv[morebig], argv[morebig + 1]) > 0)
			{
				avto = argv[morebig];
				argv[morebig] = argv[morebig + 1];
				argv[morebig + 1] = avto;
			}
			morebig += 1;
		}
		searchpos += 1;
	}
	searchpos = 0;
	while (searchpos++ < argc - 1)
		ft_putstr(argv[searchpos]);
	return (0);
}
