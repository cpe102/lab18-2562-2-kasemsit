//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.

#include<iostream>
#include <cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *,Rect *);

int main(){
	cout << "Please input Rect 1 (x y w h): ";
	cout << "Please input Rect 2 (x y w h): ";
	//Rect R1 = {1.,1.,5.,5.};
	//Rect r2 = {7.,2.,3.,3.};
	//Rect R2 = {2.,2.,5.,5.};
	Rect R1 = {-1., 2., 6.9, 9.6};
	Rect R2 = {0., 0., 1.2, 2.5};
	Rect *r1 = &R1;
	Rect *r2 = &R2;
	
	cout << "Overlap area = " << overlap(r1, r2);
	return 0;
}

double overlap(Rect *r1, Rect *r2) {
	double r1_zx = r1->x + r1->w;
	double r1_zy = r1->y - r1->h;
	double r2_zx = r2->x + r2->w;
	double r2_zy = r2->y - r2->h;
	
	double area = ( min(r1_zx, r2_zx) - max(r1->x, r2->x) ) * ( min(r1->y, r2->y) - max(r1_zy, r2_zy)   );
	if (area < 0.0)
		area = 0.0;	
		
	return area;
	
}
