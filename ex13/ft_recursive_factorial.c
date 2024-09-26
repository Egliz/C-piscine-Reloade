/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:44:13 by emorillo          #+#    #+#             */
/*   Updated: 2024/09/17 19:27:15 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}*/
