/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 14:35:11 by caidel            #+#    #+#             */
/*   Updated: 2020/07/08 16:21:17 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char c)
{
	char	*hexa;
	int		h;

	h = 0;
	hexa = "0123456789abcdef";
	h = c / 16;
	ft_putchar(hexa[h]);
	h = c % 16;
	ft_putchar(hexa[h]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] > 126))
		{
			ft_putchar('\\');
			ft_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
