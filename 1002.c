#include<stdio.h>
int main(){
    int num=1;
    int a,b;
    int sum;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("Case %d:\n",num);
        num+=1;
        sum = a+b;
        printf("%d + %d = %d\n\n",a,b,sum);
    }
}