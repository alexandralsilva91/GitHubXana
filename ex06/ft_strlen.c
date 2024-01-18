/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleite-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:05:22 by aleite-d          #+#    #+#             */
/*   Updated: 2024/01/18 20:13:37 by aleite-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
   	char	*word;

	word = "Gustavo";
	printf("the word has : %d characters, ft_strlen(word));
}	

