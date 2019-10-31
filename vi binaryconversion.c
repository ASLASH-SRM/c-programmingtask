#include<stdio.h>
#include<math.h>
int main()
{
        int num,binaryval,decimalval=0,base=1,rem;
        printf("enter the binary number");
        scanf("%d",&num);
                binaryval=num;
                while(num>0)
                {
                        rem=num%10;
                        decimalval=decimalval+rem*base;
                        num=num/10;
                        base=base*2;
                }
printf("the binary number is%d\n",binaryval);
printf("its decimal equvalent is%d\n",decimalval);
}
