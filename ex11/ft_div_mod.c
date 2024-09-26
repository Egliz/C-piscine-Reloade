/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:13:58 by emorillo          #+#    #+#             */
/*   Updated: 2024/09/12 20:45:11 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	num1;
	int	num2;
	int	div;
	int	mod;

	num1 = 3;
	num2 = 7;
	ft_div_mod(num1, num2, &div, &mod);
	return (0);
}*/
