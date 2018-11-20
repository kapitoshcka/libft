/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a memory area
** that needs to be freed with free(3), then puts the pointer to NULL.
** Param. #1 A pointer’s address that needs its memory freed and set to NULL.
** Return value None.
** Libc functions free(3).
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
