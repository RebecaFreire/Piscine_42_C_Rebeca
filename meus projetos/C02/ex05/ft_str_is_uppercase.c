/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:46:10 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:21:27 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main (void)
{

    char	*str1 = "CA";
	char	*str2 = "A";
	char	*str3 = "s8t";
	char	*str4 = "";
	int	val;

	val = ft_str_is_uppercase(str1);
	printf("Retorno = %d\n", val);
	val = ft_str_is_uppercase(str2);
	printf("\nRetorno = %d\n", val);
	val = ft_str_is_uppercase(str3);
	printf("\nRetorno = %d\n", val);
	val = ft_str_is_uppercase(str4);
	printf("\nRetorno = %d\n", val);

    return(0);
}*/