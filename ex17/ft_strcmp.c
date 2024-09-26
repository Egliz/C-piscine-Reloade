/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:39:20 by emorillo          #+#    #+#             */
/*   Updated: 2024/09/16 21:56:05 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2 [i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	int		i;
	char	*first;
	char	*second;

	first = "Hola";
	second = "Holb";
	i = ft_strcmp(first, second);
	printf("%d", i);
	return (0);
}*/
