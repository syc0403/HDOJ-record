#include<stdio.h>
#include<math.h>
float a,b,c,d;
int main()
{
    while(~scanf("%f""%f""%f""%f",&a,&b,&c,&d)){
        float sum=sqrt((c-a)*(c-a)+(d-b)*(d-b));
        printf("%1.2f\n",sum);
    }
    return 0;
}