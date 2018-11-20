/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strrchr -- locate character in strin
**  The strrchr() function is identical to strchr(),
**  except it locates
**  the last occurrence of c.
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		ind;

	i = 0;
	ind = -1;
	while (s[i])
	{
		if (s[i] == c)
			ind = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (ind == -1)
		return (0);
	return ((char *)&s[ind]);
}

/*
**  int main () {
**  const char str[] = "tutorialspoint.com";
**  const char ch = 't';
**  char *res;
**
** res = ft_strrchr(str, ch);
**
**  printf("string after %c is %s\n", ch, res);
**
**  return(0);
** }
*/
