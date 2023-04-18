/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:43:22 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/12 16:48:33 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_free(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		free(map[i++]);
	free(map);
}

int	game_free(void *alias)
{
	t_game	*game;

	game = (t_game *)alias;
	free(game->map->player);
	free(game->map->map);
	free(game->map);
	free(game);
	exit(0);
	return (1);
}
