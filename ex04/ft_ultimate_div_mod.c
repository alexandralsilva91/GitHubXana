/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleite-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:50:05 by aleite-d          #+#    #+#             */
/*   Updated: 2024/01/18 19:37:43 by aleite-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	*a;
	int	*b;
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div/mod;
	*b = div%mod;
}

int	main(void)
{	
	int	A;
	int	B;

        A = 5;
	B = 2;

	ft_ultimate_div_mod(&a, &b);
	print("a:%d, b:%d\n", a, b);	
}
