// CV9dalsi.cpp: Definuje vstupní bod pro aplikaci.
//

#include "CV9dalsi.h"
#include "VectorMath.h"
using namespace std;

int main()
{
	struct vector3d u;
	struct vector3d v;
	struct vector3d w;

	printf("Zadej hodnoty vektoru u oddelene carkou \n");
	scanf("%lf, %lf, %lf", &u.x, &u.y, &u.z);
	printf("u = (%lf, %lf, %lf)", u.x, u.y, u.z);

	printf("\nZadej hodnoty vektoru v oddelene carkou \n");
	scanf("%lf, %lf, %lf", &v.x, &v.y, &v.z);
	printf("v = (%lf, %lf, %lf)", v.x, v.y, v.z);
	
	enum typOperace oper;
	printf("\nZadej operaci (1 = soucet 2 = vektorovy soucin, 3 = rozdil vektoru): ");
	scanf("%d", &oper);

	w = operace(u, v, oper);
	tisk(w);
	skalar(u, v);

	return 0;
}
