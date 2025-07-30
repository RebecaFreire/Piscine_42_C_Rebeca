/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcas.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:35:16 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:22:28 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main ()
{
    char	str1[] = "HELLO!";
	char	str2[] = "GO";
	char	str3[] = "YEs";

	ft_strlowcase(str1);
	printf("Retorno = %s", str1);
	ft_strlowcase(str2);
	printf("\nRetorno = %s", str2);
	ft_strlowcase(str3);
	printf("\nRetorno = %s", str3);
	return (0);
}*/