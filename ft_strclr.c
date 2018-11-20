/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function assigns the value '\0' to all the characters in a chain that
** we are changing the value of existing characters to '\0'
** to clear the existing
** string rather than putting '\0' to placehold in a newly allocated memory zone
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	while (s != '\0' && *s)
		*s++ = '\0';
}

/*
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_strclr(str);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/
