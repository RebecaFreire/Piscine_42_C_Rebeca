/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:01:15 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:22:01 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
    char	*str1 = "¬Olá";
	char	*str2 = "Ok, thx";
	char	*str3 = "";
	int	val;

	val = ft_str_is_printable(str1);
	printf("Retorno = %d", val);
	val = ft_str_is_printable(str2);
	printf("\nRetorno = %d", val);
	val = ft_str_is_printable(str3);
    printf("\nRetorno = %d", val);

    return(0);
}*/