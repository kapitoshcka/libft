/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalpha -- alphabetic character test
** The isalpha() function tests for any character for
** which isupper(3) or islower(3) is true.
** The value of the argument must be representable as an
** unsigned char or the value of EOF.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
** int main()
** {
** char c, result;
**
** c = 'M';
** result = ft_isalpha(c);
** printf("The result is %d\n", result);
**
** c = 'm';
** result = ft_isalpha(c);
** printf("The result is %d\n", result);
**
** c = '+';
** result = ft_isalpha(c);
** printf("The result is %d\n", result);
**
** return 0;
** }
*/
