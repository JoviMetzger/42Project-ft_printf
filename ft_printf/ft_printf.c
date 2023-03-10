/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 13:49:30 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/11/28 08:26:27 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// 1. Go through string till you find the first %. -otherwise just print string.
// 2. Check what character comes after % (cspdiuxX%).
// 3. make a function for each of them and print it.
// __NOTE__
// - The va_arg(), va_start(), va_end(), va_copy() 
//		-macros provide a portable way to access the arguments to a function 
// 		 when the function takes a variable number of arguments. 

int	ft_print_format(va_list arg, const char *str, int i)
{
	if (str[i + 1] == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (str[i + 1] == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (str[i + 1] == 'p')
		return (ft_putstr("0x") + ft_put_pointer(va_arg(arg, void *),
				"0123456789abcdef"));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (str[i + 1] == 'u')
		return (ft_putnbr_unsigned(va_arg(arg, unsigned int)));
	if (str[i + 1] == 'x')
		return (ft_hexadecimal(va_arg(arg, unsigned int), "0123456789abcdef"));
	if (str[i + 1] == 'X')
		return (ft_hexadecimal(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	if (str[i + 1] == '%')
		return (write(1, "%", 1));
	else
		return (ft_putchar(str[i + 1]));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			print_len;
	va_list		arg;

	i = 0;
	print_len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			print_len += ft_print_format(arg, format, i);
			i++;
		}
		else
		{
			if (format[i] != '%')
				print_len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (print_len);
}

// int	main(void)
// {
// 	ft_printf("String value: %s\n", "hello world");
// 	printf("String value: %s\n", "hello world");

// 	int ret;
// 	printf("\n---broken---\n");
// 	ret = ft_printf("aaaa%");
// 	printf("\nreturn: %i\n", ret);
// 	ret = printf("aaaa%");
// 	printf("\nreturn: %i\n", ret);

// 	printf("\n---broken2---\n");
// 	ret = ft_printf("aaaa%r");
// 	printf("\nreturn: %i\n", ret);
// 	ret = printf("aaaa%r");
// 	printf("\nreturn: %i\n", ret);

// 	return (0);
// }
