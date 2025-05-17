/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:58:25 by Mal          #+#    #+#             */
/*   Updated: 2025/04/07 13:55:41 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	write_args(int argc, char **argv)
{
	int	arg;
	int	i;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			write(1, &argv[arg][i], 1);
			i++;
		}
		write(1, "\n", 1);
		arg++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
			continue ;
		}
		i++;
	}
	write_args(argc, argv);
	return (0);
}
