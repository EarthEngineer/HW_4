#include <stdio.h>
#include <math.h>

double gamma(double x){
    double t = 0;
    double a;
    double obls = 0;
    const double step = 1e-2;
    const double eps = 1e-10;

    a = pow(t+step, x-1)*pow(M_E, -t);
    while(a*(0.5)*step<=eps){
        t+=step;
        a = pow(t+step, x-1)*pow(M_E, -t);
    }

    while(a*(0.5)*step>eps){

        obls+=(a+pow(t, x-1)*pow(M_E, -t))*step*0.5;

        t+=step;
        a=pow(t+step, x-1)*pow(M_E, -t-step);
    }
    return obls;
}

int main()
{
    double b;
    scanf("%lf", &b);
    printf("%.7E", gamma(b));
}
