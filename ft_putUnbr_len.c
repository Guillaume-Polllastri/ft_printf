/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:45:14 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/19 13:34:29 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putUnbr_len(unsigned	int i)
{
	int		len;
	char	res;

	len = 0;
	if (i > 9)
		ft_putUnbr_len((i / 10));
	res = (i % 10) + '0';
	len = len + ft_putchar_len(res);
	return (len);
}
