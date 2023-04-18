/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:18:59 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/12 17:45:06 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	elements_check(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '0' && map[i][j] != '1' && map[i][j] != 'P'
				&& map[i][j] != 'C' && map[i][j] != 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	elements_counter(char **map, char c)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c)
				counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

int	elements_verification(char **map)
{
	if (elements_check(map) == 0)
	{
		ft_putstr_fd(RED"Error : strainger element :/\n", 2);
		return (0);
	}
	if (elements_counter(map, 'C') < 1)
	{
		ft_putstr_fd(RED"Error : there's no burgers ! :(\n", 2);
		return (0);
	}
	if (elements_counter(map, 'E') != 1)
	{
		ft_putstr_fd(RED"Error : you have more or less than one exit\n", 2);
		return (0);
	}
	if (elements_counter(map, 'P') != 1)
	{
		ft_putstr_fd(RED"Error : you have more or less than one player\n", 2);
		return (0);
	}
	return (1);
}
