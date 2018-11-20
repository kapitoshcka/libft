/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isdigit,-- decimal-digit character test
** The isdigit() function tests for a decimal digit character.
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

/*
**  int main()
**  {
**  char c, result;
**
**  c = '7';
**  result = ft_isdigit(c);
**  printf("The result is %d\n", result);
**
**  c = 'm';
**  result = ft_isdigit(c);
**  printf("The result is %d\n", result);
**
**  c = '+';
**  result = ft_isdigit(c);
**  printf("The result is %d\n", result);
**
**  return 0;
**  }
*/
