#include<stdio.h>
#include<conio.h>

int myfun(int n);

int main()
{
   myfun(100);
}
int myfun(int n)
{
   if (n>0)
   {
    myfun(n-1);
    printf(" %d",n);
   }
}