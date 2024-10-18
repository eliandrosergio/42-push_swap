/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:19:47 by efaustin          #+#    #+#             */
/*   Updated: 2024/10/01 14:19:48 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	*memory;

	counter = 0;
	memory = dest;
	while (len > counter)
	{
		memory[counter] = c;
		counter++;
	}
	return (memory);
}

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, '\0', len);
}

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, number * size);
	return (ptr);
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
