#include <stdio.h>

float yearfrac(int year, int day){
if (year%4) return day / 365.0;
else return day / 366.0;
}


int main()
{
int n, k;
scanf("%i %i", &n, &k);
printf("%.5f\n", yearfrac(n, k));
}
