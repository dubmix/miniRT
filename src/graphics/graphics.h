/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:00:01 by pdelanno          #+#    #+#             */
/*   Updated: 2023/08/28 14:00:03 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICS_H

# define GRAPHICS_H

# include "../../miniRT.h"

int	make_even(int nb);
t_ray	create_ray(t_scene *scene, int pixel_x, int pixel_y);
uint32_t trace_ray(t_scene *scene, t_ray ray);
float	apply_light(t_scene *scene, t_point hit_point, t_object *object);
t_point    pixel_to_coord(t_scene *scene, int pixel_x, int pixel_y);

#endif
