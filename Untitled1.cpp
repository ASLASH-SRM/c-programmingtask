#include<stdio.h>
int main()
{
        int n,x,y,revinteger=0,orgint;
        printf("enter the value of n");
        scanf("%d",&n);
        orgint=n;
        /*storing the value of reversed integer in a variable*/
        while(n!=0)
        {
        x=n%10;
        revinteger=revinteger*10+x;
        n/=10;
        }
        /*checking the condition if the number is a palindrome or not*/
        if(revinteger==orgint)

                printf("the number is palindrome");

                else

                        printf("the number is not an palindrome");

}
