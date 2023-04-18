/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_walls_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:41:45 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/12 21:21:03 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	upper_walls(char **map)
{
	int		i;

	i = 1;
	while (map[0][i])
	{
		if (map[0][i] != '1')
		{
			ft_putstr_fd(RED"Error : upper wall !\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	bottom_walls(char **map)
{
	int	j;
	int	lenth;

	j = 0;
	lenth = 0;
	while (map[lenth] != NULL)
		lenth++;
	while (map[lenth - 1][j])
	{
		if (map[lenth - 1][j] != '1')
		{
			ft_putstr_fd(RED"Error : bottom wall !\n", 2);
			return (0);
		}
		j++;
	}
	return (1);
}

int	right_walls(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1')
		{
			ft_putstr_fd(RED"Error : left wall !\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	left_walls(char **map)
{
	int	j;
	int	lenth;

	lenth = ft_strlen(map[0]);
	j = 0;
	while (map[j])
	{
		if (map[j][lenth - 1] != '1')
		{
			ft_putstr_fd(RED"Error : left wall !\n", 2);
			return (0);
		}
		j++;
	}
	return (1);
}
