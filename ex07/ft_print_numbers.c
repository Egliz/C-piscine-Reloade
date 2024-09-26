/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:53:30 by emorillo          #+#    #+#             */
/*   Updated: 2024/09/11 15:36:40 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	num1;
	char	num2;

	num1 = '0';
	num2 = '9';
	while (num1 <= num2)
	{
		ft_putchar(num1);
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
