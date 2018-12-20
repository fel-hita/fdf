/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 08:51:23 by fel-hita          #+#    #+#             */
/*   Updated: 2018/12/20 09:06:26 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct 	s_point
{
				int x;
				int y;
				int color;
}				t_point;

typedef struct	s_npoint
{
				int x;
				int y;
}				t_npoint;

typedef struct 	s_ptr
{
				void *mlx_ptr;
				void *win_ptr;				
}				t_ptr;
