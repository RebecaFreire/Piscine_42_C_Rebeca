/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:52:39 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:21:30 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
    char *str1 = "123456789";
    char *str2 = "4a819"; 
    char *str3 = "0-458";
    char *str4 = "";

    printf("str1 \"%s\" -> Retorno = %d\n", str1, ft_str_is_numeric(str1));
    printf("str2 \"%s\" -> Retorno = %d\n", str2, ft_str_is_numeric(str2));
    printf("str3 \"%s\" -> Retorno = %d\n", str3, ft_str_is_numeric(str3));
    printf("str4 \"%s\" -> Retorno = %d\n", str4, ft_str_is_numeric(str4));

    return 0;
}*/
