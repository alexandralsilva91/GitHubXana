/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleite-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:40:48 by aleite-d          #+#    #+#             */
/*   Updated: 2024/01/17 21:44:26 by aleite-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	A;
	int	B;
	int	ptra;
	int	ptrb;
	
	A = 1;
	B = 2;
	ptra = &A;
	ptrb = &B;
	
	ft_swap(ptra, ptrb);
	printf("a:%d, b:%d\n", a, b);
}
