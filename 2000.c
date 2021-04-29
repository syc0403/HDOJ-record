#include<stdio.h>
int main()
{   
    char a,b,c,d,m;
    while(~scanf("%c%c%c%c",&a,&b,&c,&d))
    {
        if (a>b)
        {
            m=b;
            b=a;
            a=m;
        }
        if(a>c)
        {
            m=a;
            a=c;
            c=m;
        }        
        if (b>c)
        {
            m=c;
            c=b;
            b=m;
        }
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
