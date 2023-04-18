/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:44:31 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/12 21:25:26 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int key, t_game *game)
{
	if (key == 53 || key < 0)
		exit(0);
	mlx_clear_window(game->mlx, game->window);
	if (key == 123 || key == 0)
		player_move_left(game);
	if (key == 124 || key == 2)
		player_move_right(game);
	if (key == 126 || key == 13)
		player_move_up(game);
	if (key == 125 || key == 1)
		player_move_down(game);
	apply_textures(game);
	return (0);
}
