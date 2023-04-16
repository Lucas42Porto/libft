/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:58:51 by lumarque          #+#    #+#             */
/*   Updated: 2023/04/16 16:32:08 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long    result;
	long 	sign;
	unsigned int i;

	result = 0;
	sign = 1;
	i = 0;

	/*The first thing we want our function to do is make sure to skip over any
	 *kind of spacing that could be found at the beginning of the string.*/

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;

	/*Once past the extra spacing, if it exists, we are checking to see if there
	 *is a negative symbol at the beginning of the number we will be converting.
	 if we see a negative symbol or a positive symbol we adjust accordingly. If
	 it's negative we set our sign equal to -1 to multiply to our result when 
	 we return it.*/

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	/*Here we convert our string of characters from char to int so long as they
	 * are numbers. If the character we are currently on is a number, we
	 * converted it to its ascii numerical value. For the first character res
	 * is always set currently at 0. We multiply 10 immediately by our res to
	 * set up the digit placement where it should be. We then subtract the
	 * numerical value of the character 0 on the ascii table from our currently
	 * character number. This sets it to its ascii numerical value. We then
	 * start our loop over and continue until we hit a character that is not a
	 * number.*/

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}

	/*Last we return the res value multiplied by the sign value to return the
	 * number based on whether it was negative or not. NOTE: We have int in
	 * parenthesis to cast the rest * sign into a int so it can be returned as
	 * an int.*/

	return ((int)(result * sign));
}

int    main()
{
    char *argv[] = {"0","-9521"};
    int numb = ft_atoi(argv[1]);
    int test = atoi(argv[1]);

    printf("%d", numb);
    printf("%d", test);
	return (0);
}
