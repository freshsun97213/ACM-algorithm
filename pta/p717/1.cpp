#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );
/*
double disk(double x1,double y1,double x2,double y2){
    double a = abs(x1-x2),b = abs(y2-y1);
    
    return sqrt(a*a+b*b);
    
}

*/
int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
    
    return 0;
}

double dist(double x1,double y1,double x2,double y2){
    double a = abs(x1-x2),b = abs(y2-y1);
    
    return sqrt(a*a+b*b);
    
}

/* 你的代码将被嵌在这里 */  
