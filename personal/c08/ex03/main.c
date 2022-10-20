#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
				point->x = 42;
				point->y = 21;
}

int	main(void)
{
				t_point	point;

				printf("point (x,y) = (%d, %d)\n", point.x, point.y);
				set_point(&point);
				/* printf("point (x,y) = (%d, %d)", point->x, point->y); */
				printf("point (x,y) = (%d, %d)\n", point.x, point.y);
				return (0);
}
