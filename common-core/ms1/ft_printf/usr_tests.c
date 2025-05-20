/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usr_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/05/20 16:07:34 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// something something main very muito fixe - vinny aka idfk shrug
	char *var = "There was a time I used to scratch my nuts and it didn't bleed";
	printf("\n\n%-114s!!!\n", var);
	ft_printf("\n\n%-114s!!!\n", var);
}
