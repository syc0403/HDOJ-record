#include<stdio.h>
int main(){
    int num;
    int i=1;
    int sum=0;
    while(scanf("%d",&num)!=EOF){
        for(i=1;i<=num;i++){
            sum=sum+i;
        }
        printf("%d\n\n",sum);
        sum=0;
    }
    return 0;
}