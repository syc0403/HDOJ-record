#include<stdio.h>
#include<stdlib.h>
double x;
int main()
{
    while(~scanf("%lf",x))
    {
        double sum = abs(x)*1.0;
        printf("%.2lf\n",sum);
    }
    return 0;
}