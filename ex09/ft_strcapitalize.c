/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:08:37 by caidel            #+#    #+#             */
/*   Updated: 2020/07/08 16:20:32 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
