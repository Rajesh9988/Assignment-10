#include<stdio.h>

int argument(int,int);
int main()
{
    int n,r,a=0;
    printf("Enteyr value of n & r:-\n");
    scanf("%d %d",&n,&r);
    a = argument(n,r);
    printf("print number of argument:- %d",a);
}
int argument(int n,int r)
{
    int fact1=1,fact2=1,a=0,i;
    for ( i = n; i >= 1; i--)
    {
        fact1 = fact1*i;
        if (i<=n-r)
        {
            fact2 = fact2*i;
        }    
    }
    a = fact1/(fact2);
    return a;    
}