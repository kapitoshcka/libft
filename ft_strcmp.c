/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcmp, strncmp -- compare strings
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
** int main () {
**    	char str1[15] = "abcdef";
**    	char str2[15] = "ABCDEF";
**    	int result = strcmp(str1, str2);
** 	printf("%d\n", result);
**    	if(result < 0) {
**       	printf("str1 is less than str2");
**    	} else if(result > 0) {
**       	printf("str2 is less than str1");
**    	} else {
**       	printf("str1 is equal to str2");
** 	}
**
** 	return(0);
** }
*/
