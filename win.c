/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:08:42 by hbechri           #+#    #+#             */
/*   Updated: 2023/04/12 21:35:05 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	win(t_game *game)
{
	if (game->map->c == 0)
	{
		ft_putstr_fd(GREEN"\nCongratulations !\n", 1);
		exit(0);
	}
	ft_putstr_fd(RED"\nPlease collect all the burgers !", 2);
}
