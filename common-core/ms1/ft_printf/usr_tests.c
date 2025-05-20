/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usr_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/05/20 16:10:35 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// something something main very muito fixe - vinny aka idfk shrug || skibidy sigma
	char *var = "There was a time I used to scratch my nuts and it didn't bleed";
	int vini_gostoso = 534;
	printf("testing fucking -");
	printf("\n\n%s!!!\n", var);
	ft_printf("\n\n%s!!!\n", var);

	printf("testing fucking +\n\n");
	printf("%+d\n\n",  vini_gostoso);
	ft_printf("%+d\n\n",  vini_gostoso);

}
