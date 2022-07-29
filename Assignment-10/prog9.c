#include<stdio.h>
int digits(int,int);

int main()
{
    int x =2865, d;
    printf("Enter a digits which we want to check in number\n");
    scanf("%d",&d);
    if (d==1)
    {
        printf("digits is avalable\n");
    }
    else
        printf("digits is unavalable\n");
    
}
int digits(int x,int d)
{
    int rem =0;
    while(x>0)
    {
        rem = x%10;
        if (rem ==d)
        {
            return 1;
        }
        else
            x = x/10;
        
    }
    
}