/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:18:33 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/17 13:13:20 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(const char *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			word_count++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (word_count);
}

void	ft_free(char **split, int words)
{
	int	j;

	j = 0;
	while (j < words)
	{
		free (split[j]);
		j++;
	}
	free (split);
}

char	**ft_split_machine(const char *s, char c, char **split)
{
	int		i;
	int		words;
	int		word_len;
	int		start;

	i = 0;
	words = 0;
	while (s[i] != '\0' && words < ft_word_count(s, c))
	{
		while (s[i] == c)
			i++;
		start = i;
		word_len = 0;
		while (s[i] != '\0' && s[i++] != c)
			word_len++;
		split[words] = ft_substr(s, start, word_len);
		if (!split[words])
			return (ft_free(split, words), NULL);
		words++;
	}
	split[words] = NULL;
	return (split);
}

char	**ft_split(const char*s, char c)
{
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!split || !s)
		return (NULL);
	return (ft_split_machine(s, c, split));
}
