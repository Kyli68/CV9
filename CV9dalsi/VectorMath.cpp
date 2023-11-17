#include "VectorMath.h"
#include <corecrt_math.h>
#include <stdio.h>


struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ)
{

	struct vector3d w;

	switch (typ)
	{
	case soucet:
			w.x = u.x + v.x;
			w.y = u.y + v.y;
			w.z = u.z + v.z;
			break;

		case vektorovySoucin:
			w.x = u.y * v.z - u.z * v.y;
			w.y = u.z * v.x - u.x * v.z;
			w.z = u.x * v.y - u.y * v.x;
			break;

		case rozdilVektoru:
			w.x = u.x - v.x;
			w.y = u.y - v.y;
			w.z = u.z - v.z;
			break;

		default:
			printf("\nneplatna operace\n");
			
	}
	return w;

}

void skalar(struct vector3d u, struct vector3d v)
{

	double result = u.x * v.x + u.y * v.y + u.z * v.z;
	printf("\nSklarani soucin vektoru u a v je %lf\n\n", result);

}

void tisk(struct vector3d u)
{
	printf("\nw = (%lf, %lf, %lf)", u.x, u.y, u.z);
	double velikost = sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
	printf("\n|w| = %lf", velikost);

}