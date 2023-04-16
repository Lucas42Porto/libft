/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:18:19 by lumarque          #+#    #+#             */
/*   Updated: 2023/04/16 16:32:12 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*According to the man this function copies n bytes from memory area src to 
 * memory area dst. If dst and src overlap, behavior is undefined. Applications
 * in which dst and src might overlap should use ft_memmove instead. This
 * function returns the original value of dst.*/

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	/*We start by checking if src and dst exist, if not, it returns 0. 
	 * Because we will be doing our loop only
	 * as long as we are smaller than the given size_t n we want to make sure
	 * we make our counter variable a size_t as well so we can compare it to n.
	 * Then we begin our loop.*/

	size_t	i;
	if (!dst && !src)
		return (0);

	/*So long as our counter i is smaller than the given size_t n we want our
	 * loop to continue since we are copying n bytes from memory area src to 
	 * memory area dst. Inside our loop we place index position i of s (which
	 * currently holds src) into index position i of d (which currently holds
	 * memory area dst). We increment our i and continue the loop until i is no
	 * longer smaller than n. We then return dst. Into loop converting the parameters to unsigned char to copy.*/
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	main ()
{
	char *dst[50] = {"abc"};
	char *src[50] = {"Test"};

	printf("%s \n", ft_memcpy(dst, src, 20));
	printf("%s \n", memcpy(dst, src, 20));
	return (0);
}