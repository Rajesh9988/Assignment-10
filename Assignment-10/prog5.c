#include<stdio.h>
#include<conio.h>

int odd(int n);

int main()
{ 
    odd(10);
}
int odd(int n)
{
   int odd=0,i;
   for ( i = 0; i <= n; i++)
   {
      if (i%2==0)
      {
         odd = i+1;
        printf(" %d",odd);
      }
      
   }
}