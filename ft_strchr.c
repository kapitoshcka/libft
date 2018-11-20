/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strchr -- locate character in string
**  The strchr() function locates the first occurrence of c (converted
**  to a char) in the string pointed to by s.  The terminating null
**  haracter is considered to be part of the string; therefore if c is
**  `\0', the functions locate the terminating `\0'.
*/

#include "stdio.h"
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s != '\0')
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
**  int main () {
**  const char str[] = "tutorialspoint.com";
**  const char ch = 'f';
**  char *res;
**
**  res = ft_strchr(str, ch);
**
**  printf("string after %c is %s\n", ch, res);
**
**  return(0);
**  }
*/
