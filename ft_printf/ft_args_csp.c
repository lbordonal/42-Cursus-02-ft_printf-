/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_csp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:47:59 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/22 11:56:36 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %c: */
int	ft_putchar_count(int c)
{
	write(1, &c, 1);
	return (1);
}

/* %s: */
int	ft_putstr_count(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "null", 4);
		return (4);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/* %p: */
int	ft_putptr_count(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 2);
	else
	{
		ft_putptr(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}

int	ft_ptrlen(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

void	ft_putptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + '0'), 1);
		else
			ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
}
