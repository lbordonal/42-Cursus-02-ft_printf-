/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_xXpercent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:58:31 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/18 15:58:18 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %x or %X: */
/* int	ft_puthex_count(unsigned int n)
{

} */

/* %%: */
int	ft_putpercent(void)
{
	write(1, "%", 1);
	return (1);
}
