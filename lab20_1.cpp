#include<iostream>
using namespace std;
#include<cmath>

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
    double A1w,A2w,jk;
    A1w = min(a.x+a.w,b.x+b.w) - max(a.x,b.x);
    A2w = min(b.y,a.y) - max(a.y-a.h,b.y-b.h);
    jk = A1w*A2w;
    if(jk < 0) jk = 0;
    
    return jk;

}
