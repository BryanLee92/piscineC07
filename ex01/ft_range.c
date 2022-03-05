/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <brlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:39:32 by brlee             #+#    #+#             */
/*   Updated: 2022/03/01 17:23:28 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*tab;

	count = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		tab[count] = min;
		count++;
		min++;
	}
	return (tab);
}
