/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalnum -- alphanumeric character test
** The isalnum() function tests for any character for which isalpha(3)
** or isdigit(3) is true.
** The value of the argument must be representable as an unsigned char
** or the value of EOF.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
** int main()
** {
**	char c, result;
**
**	c = 'M';
**	result = ft_isalnum(c);
**	printf("The result is %d\n", result);
**
**	c = 'm';
**	result = ft_isalnum(c);
**	printf("The result is %d\n", result);
**
**	c = '+';
**	result = ft_isalnum(c);
**	printf("The result is %d\n", result);
**
**	return 0;
** }
*/
