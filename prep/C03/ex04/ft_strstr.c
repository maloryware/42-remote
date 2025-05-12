/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:55:48 by Mal          #+#    #+#             */
/*   Updated: 2025/03/10 15:21:22 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	target_count;
	int	len;

	count = 0;
	len = 0;
	while (to_find[len])
		len++;
	if (len < 1)
		return (str);
	while (str[count])
	{
		target_count = 0;
		while (str[count + target_count] == to_find[target_count])
		{
			if (target_count == len - 1)
				return (str + count);
			target_count++;
		}
		count++;
	}
	return ("\0");
}
