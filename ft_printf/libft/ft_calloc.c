/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:00:14 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/10/29 09:08:24 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//used to allocate multiple blocks of memory having the same size
//malloc allocates a single block - calloc allocates multipile blocks

void	*ft_calloc(size_t count, size_t n)
{
	void			*ptr;
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	ptr = (void *)malloc(count * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * n);
	return (ptr);
	total = count * n;
	dst = malloc(total);
	if (dst == 0)
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}

/*int	main(void)
{
	size_t count = 5;
	size_t n = 2;

	printf("%d", ft_calloc(count, n));
}*/
