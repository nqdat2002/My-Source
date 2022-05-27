#include <iostream>
#include <string.h>
# include <math.h>
using namespace std;
typedef struct
{
	int x;
	int y;
}sp;
void nhap(sp* p)
{
	cin >> p->x >> p->y;
}
void diemch(sp p1, sp p2, sp p3)
{
	int a, b, c, d, e, f, D, Dx, Dy;
	a = 2 * (p1.x - p3.x);
	b = 2 * (p1.y - p3.y);
	e = pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) - pow(p2.x - p3.x, 2) - pow(p2.y - p3.y, 2) - pow(p3.x, 2) - pow(p3.y, 2) + pow(p1.x, 2) + pow(p1.y, 2);
	c = 2 * (p2.x - p3.x);
	d = 2 * (p2.y - p3.y);
	f = pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) - pow(p1.x - p3.x, 2) - pow(p1.y - p3.y, 2) - pow(p3.x, 2) - pow(p3.y, 2) + pow(p2.x, 2) + pow(p2.y, 2);
	D = a * d - b * c;
	Dx = d * e - b * f;
	Dy = a * f - c * e;
	if (D != 0)
	{
		cout << Dx / D << " ";
		cout << Dy / D << endl;
	}
}
int main()
{
	sp p1, p2, p3;
	nhap(&p1);
	nhap(&p2);
	nhap(&p3);
	diemch(p1, p2, p3);
	return 0;
}
