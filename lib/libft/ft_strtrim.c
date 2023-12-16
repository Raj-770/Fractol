/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambhar <rpambhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:46:32 by rpambhar          #+#    #+#             */
/*   Updated: 2023/10/15 12:19:54 by rpambhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	end;
// 	size_t	i;
// 	char	*trim_str;

// 	if (!s1 || !set)
// 		return (NULL);
// 	start = 0;
// 	i = 0;
// 	end = ft_strlen(s1) - 1;
// 	while (ft_strchr(set, *(s1 + start)))
// 		start++;
// 	while (ft_strchr(set, *(s1 + end)))
// 		end--;
// 	trim_str = (char *)malloc((end - start) + 2);
// 	if (!trim_str)
// 		return (NULL);
// 	while (i <= (end - start))
// 	{
// 		*(trim_str + i) = *(s1 + (start + i));
// 		i++;
// 	}
// 	*(trim_str + i) = '\0';
// 	return (trim_str);
// }

int	ft_checker(char s, const char *set)
{
	int	i;

	i = 0;
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trim_str;
	const char	*end;

	end = s1 + ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_checker(*s1, set))
		s1++;
	if (*s1 == '\0')
	{
		trim_str = (char *)malloc(1);
		if (trim_str == NULL)
			return (NULL);
		trim_str[0] = '\0';
		return (trim_str);
	}
	while (ft_checker(*(end - 1), set))
		end--;
	trim_str = ft_substr(s1, 0, end - s1);
	return (trim_str);
}
