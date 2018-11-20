/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is made to apply the parameter function f
** to each character in
** a string passed as the parameter s. Each character is
** passed by the address
** to the function f so that it can be modified if necessary.
*/

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}

/*
** void my_func(char *str)
** {
** 	printf("My inner function %s\n", str);
** }
**
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_striter(str, my_func);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/
