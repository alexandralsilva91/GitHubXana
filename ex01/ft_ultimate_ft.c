/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*      i                                              +:+ +:+         +:+     */
/*   By: aleite-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:55:12 by aleite-d          #+#    #+#             */
/*   Updated: 2024/01/18 18:27:54 by aleite-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
int	main(void)
{
	int	i;
	int	*pt1;
	int	**pt2;
	int	***pt3;
	int	****pt4;
	int	*****pt5;
	int	******pt6;
	int	*******pt7;
	int	********pt8;
	int	*********pt9;
	
	i = 48;
	pt1 = &i;
	write(1, &i, 1);
	i++;
	pt2 = &pt1;
	write(1, &(*pt1), 1);
	i++;
	pt3 = &pt2;
	write(1, &(**pt2), 1);
	i++;
	pt4 = &pt3;
	write(1, &(***pt3), 1);
	i++;
	pt5 = &pt4;
	write(1, &(****pt4), 1);
	i++;
	pt6 = &pt5;
	write(1, &(*****pt5), 1);
	i++;
	pt7 = &pt6;
	write(1, &(******pt6), 1);
	i++;
	pt8 = &pt7;
	write(1, &(*******pt7), 1);
	i++;
	pt9 = &pt8;
	write(1, &(********pt8), 1);
	ft_ultimate_ft(&pt8);
	write(1, &i, 1);
	return (0);
}

OU:

int	main(void)
{
	int     i;
        int     *pt1;
        int     **pt2;
        int     ***pt3;
        int     ****pt4;
        int     *****pt5;
        int     ******pt6;
        int     *******pt7;
        int     ********pt8;
        int     *********pt9;

	i = 48;
	*pt1 = &i;
	ft_ultimate_ft(&i);	
	return (0);
}
*/
