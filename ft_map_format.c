/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:48:44 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/13 14:22:24 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	extension_checker(char *ext)
{
	ext = ft_strrchr(ext, '.');
	if (!ext || ft_strcmp(ext, ".ber"))
	{
		ft_putstr_fd(RED"Error : file extantion must be .ber\n"RED, 2);
		return (0);
	}
	return (1);
}

int	map_format(char **map)
{
	int		i;
	size_t	lenth;

	i = 1;
	lenth = ft_strlen(map[0]);
	while (map[i])
	{
		if (lenth != ft_strlen(map[i]))
		{
			ft_putstr_fd(RED"Error : invalid map !\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	format_checker(char **map)
{
	if (map_format(map) == 0 || upper_walls(map) == 0
		|| bottom_walls(map) == 0 || right_walls(map) == 0
		|| left_walls(map) == 0)
		return (0);
	return (1);
}
