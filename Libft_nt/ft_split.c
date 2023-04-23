/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:10:46 by lumarque          #+#    #+#             */
/*   Updated: 2023/04/23 18:07:21 by lumarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	count_words(const char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_separator(str[i], sep))
		{
			words++;
			while (str[i] && !is_separator(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*word_cpy(const char *str, char sep)
{
	char	*word;
	int		wordlen;
	int		i;

	wordlen = 0;
	while (str[wordlen] && !is_separator(str[wordlen], sep))
		wordlen++;
	word = (char *) malloc(sizeof(char *) * (wordlen + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (words == NULL || s == NULL)
		return (NULL);
	while (s[i])
	{
		if (!is_separator(s[i], c))
		{
			words[j] = word_cpy(&s[i], c);
			while (s[i] && !is_separator(s[i], c))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}
