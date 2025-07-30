/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercas.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:23:42 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/18 18:21:28 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char	*str1 = "casa";
	char	*str2 = "arroZ";
	char	*str3 = "s8t";
	char	*str4 = "";
	int	val;

	val = ft_str_is_lowercase(str1);
	printf("Retorno = %d\n", val);
	val = ft_str_is_lowercase(str2);
	printf("\nRetorno = %d\n", val);
	val = ft_str_is_lowercase(str3);
	printf("\nRetorno = %d\n", val);
	val = ft_str_is_lowercase(str4);
	printf("\nRetorno = %d\n", val);

    return (0);
}*/
