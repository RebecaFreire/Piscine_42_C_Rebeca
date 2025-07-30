/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:17:51 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:22:15 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char	str1[] = "hello!";
	char	str2[] = "go";
	char	str3[] = "Yes";

	ft_strupcase(str1);
	printf("Retorno = %s", str1);
	ft_strupcase(str2);
	printf("\nRetorno = %s", str2);
	ft_strupcase(str3);
	printf("\nRetorno = %s", str3);
	return (0);
}*/
