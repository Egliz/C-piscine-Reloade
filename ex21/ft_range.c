/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:28:17 by emorillo          #+#    #+#             */
/*   Updated: 2024/09/21 14:44:38 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		++i;
		++min;
	}
	return (arr);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = 8;
	max = 10;
	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Erroree");
		return (1);
	}
	printf ("Rango de %d a %d: ", min, max);
	while (i < max - min)
	{
		printf("%d", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}*/
