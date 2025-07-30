/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:12:43 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:21:31 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main()
{
	char arr[] = {"Hello"};
	int val;

	val = ft_str_is_alpha(arr);
    printf("%d\n", ft_str_is_alpha("hello")); 
    printf("%d\n", ft_str_is_alpha("HELLO"));
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("Hello123"));
    printf("%d\n", ft_str_is_alpha("Hello@123")); 

	return (0);
}*/
