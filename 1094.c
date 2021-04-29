#include<stdio.h>
int n,m;
int main()
{
    while(~scanf("%d",&n))
    {   
        int sum = 0;
        while(n--)
        {
            scanf("%d",&m);
            sum+=m;
        }
        printf("%d\n",sum);
    }
    return 0;
}