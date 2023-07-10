/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:39:08 by bsoykan           #+#    #+#             */
/*   Updated: 2023/07/10 13:07:26 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	int		needle_len;
	int		i;

	if (!str && !len)
		return (NULL);
	if (*needle == 0)
		return ((char *)str);
	needle_len = (int)ft_strlen(needle);
	i = 0;
	while (str[i] && i <= ((int)len - needle_len))
	{
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
