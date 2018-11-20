/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii -- test for ASCII character
** The isascii() function tests for an ASCII character,
** which is any character between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
** int main()
** {
** char c, result;
**
**  c = 'M';
**  result = ft_isascii(c);
**  printf("The result is %d\n", result);
**
**	c = '¥';
**   result = ft_isascii(c);
**    printf("The result is %d\n", result);
**
**   c = '+';
**    result = ft_isascii(c);
**  printf("The result is %d\n", result);
**
**  return 0;
**  }
*/
