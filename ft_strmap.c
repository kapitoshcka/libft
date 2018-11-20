/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:32:51 by fkarnats          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:51 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This functin applies the given function f to each character of the given
** string in order to create a new string that is the result of have function
** f run on string s. It will return a 'fresh' copy of the modified string
*/

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** char my_func(char str)
** {
** 	printf("My inner function %c\n", str);
** 	return str;
** }
**
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_strmap(str, my_func);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/
