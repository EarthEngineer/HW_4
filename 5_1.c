#include <stdio.h>
#include <math.h>

int main(){

int n;
scanf("%i", &n);

long double result = 0.0;
for(int i=1; i<=n; ++i){
    long double t=0.0;
    t+=pow(-1, i+1);
    t/=(2*i)-1;
    result+=t;
}
result*=4;


printf("%Lf\n", result);
}
