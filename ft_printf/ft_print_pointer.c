/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_pointer.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 08:46:37 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/11/22 16:03:09 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_len(unsigned long num)
{
	int	len;

	len = 0;
	while (num)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static char	*ft_hex_convert(unsigned long num, char *base)
{
	char	*hex;
	int		len;

	len = hex_len(num);
	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (0);
	hex[len] = '\0';
	while (len > 0)
	{
		hex[len - 1] = *(num % 16 + base);
		num /= 16;
		len--;
	}
	return (hex);
}

int	ft_put_pointer(void *nbr, char *base)
{
	char			*str;
	int				len;
	unsigned long	num;

	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	num = (unsigned long)nbr;
	str = ft_hex_convert(num, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
