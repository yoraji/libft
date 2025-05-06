/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoraji <yoraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:08:11 by yoraji            #+#    #+#             */
/*   Updated: 2024/10/26 23:08:30 by yoraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	if (size == 0 && !dst)
		return (ft_strlen((char *)src));
	d_len = ft_strlen((char *)dst);
	s_len = ft_strlen((char *)src);
	if (size <= d_len)
		return (size + s_len);
	if (s_len < size - d_len - 1)
		ft_memcpy(dst + d_len, src, s_len + 1);
	else
	{
		ft_memcpy(dst + d_len, src, size - d_len - 1);
		dst[size - 1] = '\0';
	}
	return (s_len + d_len);
}
