#pragma once

enum typOperace { soucet = 1, vektorovySoucin, rozdilVektoru };

struct vector3d
{
	double x;
	double y;
	double z;
};
struct vector3d operace(struct vector3d u, struct vector3d v, enum
	typOperace typ);
void tisk(struct vector3d u);

void skalar(struct vector3d u, struct vector3d v);