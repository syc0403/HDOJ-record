#include <stdio.h>
int n,m;
int main()
{   scanf("%d", &n);
    while(n--){
        int sum = 0;
        scanf("%d", &m);
        while(m--)
        {   int num;
            scanf("%d", &num);
            sum+=num;
        }
        printf("%d\n",sum);
        if(n>0)
        {
            printf("\n");
        }
    }
    return 0;
}