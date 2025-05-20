/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usr_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/05/20 16:25:02 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// something something main very muito fixe - vinny aka idfk shrug || skibidy sigma
	char *var = "There was a time I used to scratch my nuts and it didn't bleed";
	int vini_gostoso = 0;
	printf("testing fucking -");
	printf("\n\n%s!!!\n", var);
	ft_printf("\n\n%s!!!\n", var);

	printf("\ntesting fucking +\n\n");
	printf("%+d\n\n",  vini_gostoso);
	ft_printf("%+d\n\n",  vini_gostoso);

	printf("\ntesting fucking ' '+\n\n");
	printf("% d\n\n",  vini_gostoso);
	ft_printf("% d\n\n",  vini_gostoso);

	unsigned int	hashitagui = 3e8;
	printf("/nTestinf the nakye west #\n");
	printf("%#x\n\n", hashitagui);
	ft_printf("%#x\n\n", hashitagui);

	printf("Obrigado vini por me ajudar com o meu main function, tenho muita dificuldade em testar enas :D <3 nya~");

}
