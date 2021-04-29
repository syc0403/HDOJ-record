#include<stdio.h>
#include<math.h>
#define PI 3.1415927
double r;
int main()
{
    while(scanf("%lf",&r)!=EOF)
    {
        double sum=4.0/3.0*PI*r*r*r;
        printf("%.3lf\n",sum);
    }
    return 0;
}