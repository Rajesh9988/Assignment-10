#include<stdio.h>
int factor(int);
int main()
{
    int num;
    factor(60);
}
int factor(int num)
{
    int i;
  for ( i = 1; i <= num; ++i)
  {
        if (num%i==0)
        {
            printf(" %d",i);
        }
        
  }
  
}