/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rede-lim <rede-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:55:15 by rede-lim          #+#    #+#             */
/*   Updated: 2025/06/04 17:18:48 by rede-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	write(1, "\n", 1);
// 	return (0);
// }
