#include<iostream>
#include<cmath>

#define dd double 

using namespace std;

struct point{
    dd x,y;
}p[3];

dd sum(dd a,dd b ,dd c){
    return a+b+c;
} 

dd pp(point a,point b){
    dd x =a.x-b.x,y=a.y-b.y;

    return sqrt(x*x+y*y);
}


int main(){
    for(int i =0 ;i < 3;i ++){
        cin >> p[i].x >>p[i].y;
    }

    printf("%.2lf\n",sum(pp(p[1],p[0]),pp(p[0],p[2]),pp(p[1],p[2])));
}