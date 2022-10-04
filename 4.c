#include <stdio.h>
#include <math.h>

unsigned long long fact(int  n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

int main(){

    int n;
    scanf("%i", &n);
    long double result = 0.0;
    if (n % 2) {
        result+=pow(2, n);
        result*=fact(n);
        result/=(2*fact((n-1)/2));
        result/=pow(4*M_PI, ((n-1)/2));
    }
    else{
        result+=pow(2, n);
        result*=fact(n/2);
        result/=pow(M_PI, (n/2));


    }
    printf("%Lf\n", result);
}

