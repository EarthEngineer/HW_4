#include <stdio.h>


unsigned long long fact(int  n, int k)
{
unsigned long long result = 1;
for (int i = k; i <= n; ++i)
    result *= i;
return result;
}
int main()
{
int k, n;
scanf("%i %i", &n, &k);
printf("%llu\n", fact(n, n-k+1 ));
}
