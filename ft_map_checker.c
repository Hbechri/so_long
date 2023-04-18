/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:09:35 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/13 14:33:05 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_map(char **map)
{
	if (!format_checker(map) || !elements_verification(map))
		return (0);
	return (1);
}

char	**ft_map_checker(char *path)
{
	char	**map;

	map = ft_map_read(path);
	if (!map || !valid_map(map))
		exit (1);
	if (path_checker(path) == 0)
	{
		ft_putstr_fd(RED
			"Error : Jacke can't exit or can't eat all the burgers :(\n", 2);
		exit (1);
	}
	return (map);
}
