/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isprint -- printing character test (space character inclusive)
** The isprint() function tests for any printing character,
** including space (` ').
** The value of the argument must be repre-
** sentable as an unsigned char or the value of EOF.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

/*
** int main()
**
** {
**
** 	char c, result;
**
**  	c = 'M';
**  	result = ft_isprint(c);
**  	printf("The result is %d\n", result);
**
**     c = 'm';
**    result = ft_isprint(c);
**    printf("The result is %d\n", result);
**
**  	c = '+';
**  	result = ft_isprint(c);
**  	printf("The result is %d\n", result);
**
**  	return 0;
**  }
*/
