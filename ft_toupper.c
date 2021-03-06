/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** toupper, toupper_l -- lower case to upper case letter conversion
** The toupper() function converts a lower-case letter
** to the corresponding upper-case letter.
** The argument must be repre-sentable as an unsigned char or the value of EOF.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
** int main()
** {
**     char c, result;
**
**     c = 'M';
**     result = ft_toupper(c);
**     printf("The result is %c\n", result);
**
**     c = 'm';
**     result = ft_toupper(c);
**     printf("The result is %c\n", result);
**
**     c = '+';
**     result = ft_toupper(c);
**     printf("The result is %c\n", result);
**
**     return 0;
** }
*/
