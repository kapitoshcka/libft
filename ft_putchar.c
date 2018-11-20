/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function that writes a single character to the standard
** output stream of the terminal.
** Param. #1 The character to output.
** The last parameter is the number of bytes to write.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
**	int main ()
**	{
**	char let = 'A';
**	ft_putchar(let);
**	return(0);
**	}
*/
