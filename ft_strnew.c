/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates memory and returns a 'fresh' string that ends with
** '\0'. Each character in the string is set to '\0' if the allocation fails the
** function returns NULL. To do this we simply use our ft_memalloc function with
** the size parameter given to our function. We make sure cast
** it as a char string
** because that is what we want to return and we have to add + 1 to our size_t
** to compensate for the terminating '\0'.
*/

#include "libft.h"

char		*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

/*
** int main()
** {
** 	char *result = ft_strnew(5);
** 	printf("The result is %s\n", result);
** 	return 0;
** }
*/
