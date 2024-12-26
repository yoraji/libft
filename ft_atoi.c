/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoraji <yoraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:18:55 by yoraji            #+#    #+#             */
/*   Updated: 2024/10/26 14:46:23 by yoraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *ptr)
{
	long	result;
	int		signe;

	signe = 1;
	result = 0;
	while ((*ptr >= 9 && *ptr <= 13) || (*ptr == 32))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			signe = -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		result = result * 10 + (*(ptr++) - '0');
		if (result == 2147483647)
		{
			if (signe == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
	}
	return ((int)(signe * result));
}
