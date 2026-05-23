/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 06:15:53 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/24 06:21:18 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H
# define RAY_H

#include "vec3.h"

class ray{
	public:
		ray() {}
		ray(const point3& origin, const vec3& direction): orig(origin), dir(direction){}

		const point3& origin() const { return orig;}
		const vec3& direction() const { return dir;}

		point3 at(double t) const {
			return orig +  t * dir;
		}
		
	private:
		point3 orig;
		vec3 dir;
};

#endif