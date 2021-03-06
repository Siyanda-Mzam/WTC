/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:06:35 by qmuntada          #+#    #+#             */
/*   Updated: 2014/11/06 13:05:00 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = -1;
	while ((++i) < n && *(s2 + i) != '\0')
		*(s1 + (len + i)) = *(s2 + i);
	*(s1 + (len + i)) = '\0';
	return (s1);
}
