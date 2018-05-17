/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojerroud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 18:38:08 by ojerroud          #+#    #+#             */
/*   Updated: 2018/05/08 18:38:10 by ojerroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void    init_mlx(t_env *e)
{
    e->mlx.mlx = mlx_init();
    e->mlx.win = mlx_new_window(e->mlx.mlx, WIDTH, HEIGHT, "win");
    mlx_loop(e->mlx.mlx);
}

int     main(int ac, char **av)
{
    t_env  e;

    if (ac != 2)
        return (0);
    av[1][0] += 0;
    init_mlx(&e);
    return (0);
}