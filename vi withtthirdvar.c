#include<stdio.h>
void main()
{
        int a,b;
        printf("enter the value of a and b");
        scanf("%d%d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("the value ofb is %d",b);
        printf("the value of a is%d",a);
}
