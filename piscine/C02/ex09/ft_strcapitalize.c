/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:33:40 by Mal          #+#    #+#             */
/*   Updated: 2025/03/20 17:45:46 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanum(char *c)
{
	if ((*c >= 'a' && *c <= 'z')
		|| (*c >= 'A' && *c <= 'Z')
		|| (*c >= '0' && *c <= '9'))
		return (1);
	return (0);
}

void	ft_setchar(int i, int last, char *str)
{
	if (ft_is_alphanum(&str[last]))
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	else if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (i > 0)
			ft_setchar(i, i - 1, str);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	out[] = "tHis is a verY LONGWIn123dDED str-in gGWI44T2H ..";

	printf("%s\n", ft_strcapitalize(out));
}*/
