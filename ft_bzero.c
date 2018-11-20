/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** bzero -- write zeroes to a byte string
** The bzero() function writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *p;

	p = (char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
	return ;
}

/*
** void	ft_bzero(void *s, size_t n)
** {
** 	ft_memset(s, 0, n);
** }
*/

/*
** int main()
** {
**    char str[100] = "working on bzero function.";
**
**    ft_bzero(str + 3, 1);
**    printf("After memset(): %s\n", str);
**    return 0;
** }
*/
