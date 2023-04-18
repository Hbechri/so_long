/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_textures.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:07:44 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/13 13:55:20 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_texture(t_game *game, int x, int y)
{
	char	*path;
	int		key;

	key = mlx_key_hook(game->window, &key_hook, game);
	if (game->map->map[x][y] == 'E')
		path = "textures/exit.xpm";
	else if (game->map->map[x][y] == '1')
		path = "textures/wall.xpm";
	else if (game->map->map[x][y] == '0')
		path = "textures/flooor.xpm";
	else if (game->map->map[x][y] == 'C')
		path = "textures/collect.xpm";
	else if (game->map->map[x][y] == 'P')
		path = "textures/player.xpm";
	else
		return ;
	game->img = mlx_xpm_file_to_image (game->mlx, path,
			&game->win_size, &game->win_size);
	if (!game->img)
	{
		ft_putstr_fd(RED"Error : texture not found !\n", 2);
		exit(1);
	}
	mlx_put_image_to_window(game->mlx, game->window, game->img, y * 60, x * 60);
	mlx_destroy_image(game->mlx, game->img);
}

void	apply_textures(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map->map[x])
	{
		y = 0;
		while (game->map->map[x][y] != '\n' && game->map->map[x][y])
		{
			put_texture(game, x, y);
			y++;
		}
		x++;
	}
}
