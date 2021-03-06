/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:05:03 by olbondar          #+#    #+#             */
/*   Updated: 2018/09/30 10:39:13 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	while (size--)
	{
		*(char *)dst++ = *(char *)src;
		if (*(char *)src++ == (char)c)
			return ((char *)dst);
	}
	return (NULL);
}
