/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:30:08 by lumarque          #+#    #+#             */
/*   Updated: 2023/04/16 16:50:44 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 	Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t	i;
	size_t	j;

	if (!s || !(sub = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
/*
int	main ()
{
	printf("%s \n", ft_substr("Testing", 3, 2));
	return (0);
}*/