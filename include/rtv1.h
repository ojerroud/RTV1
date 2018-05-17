/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojerroud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 18:53:56 by ojerroud          #+#    #+#             */
/*   Updated: 2018/05/08 18:53:58 by ojerroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H

# include <math.h>
# include <stdio.h>
# include "libft.h"
# include "mlx.h"

# define WIDTH  800
# define HEIGHT 800

typedef struct      s_mlx
{
    void    *mlx;
    void    *win;
    void    *img;
}                   t_mlx;

typedef struct      s_env
{
    t_mlx   mlx;

}                   t_env;

#endif