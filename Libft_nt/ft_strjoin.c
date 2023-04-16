/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:30:42 by lumarque          #+#    #+#             */
/*   Updated: 2023/04/16 17:02:06 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


char *ft_strjoin(char const *s1, char const *s2)
{
	char *dst;
	int	i;
	int	j;

	if (!(dst = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) || !s1 || !s2)
		return NULL;
	i = 0;
	while (s1[i] != '\0')
		dst[i] = s1[i++];
	j = 0;
	while (s2[j] != '\0')
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}

int main()
{
	printf("%s\n", ft_strjoin("42", "Porto"));
    return (0);
}
